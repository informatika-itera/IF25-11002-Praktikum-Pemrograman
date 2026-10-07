#!/usr/bin/env bash
# Cek otomatis hands-on. Jalankan dari folder ini: bash cek.sh
# Butuh g++. Untuk GDB Online, bandingkan keluaran kalian dengan expected/ secara manual.
cd "$(dirname "$0")"
lulus=0; total=0
for sumber in latihan/*.cpp; do
  nama=$(basename "$sumber" .cpp); harapan="expected/$nama.txt"; masukan="input/$nama.txt"
  [ -f "$harapan" ] || continue
  total=$((total+1))
  if ! g++ -std=c++17 -Wall -Werror -o /tmp/cek_$$ "$sumber" 2>/tmp/cek_$$.log; then
    echo "BELUM  $sumber  (gagal kompilasi atau ada peringatan)"
    head -n 3 /tmp/cek_$$.log | sed 's/^/       /'
    continue
  fi
  if [ -f "$masukan" ]; then hasil=$(/tmp/cek_$$ < "$masukan"); else hasil=$(/tmp/cek_$$ < /dev/null); fi
  if [ "$hasil" == "$(cat "$harapan")" ]; then
    echo "LULUS  $sumber"; lulus=$((lulus+1))
  else
    echo "BELUM  $sumber  (keluaran berbeda; < punya kalian, > yang diharapkan)"
    diff <(echo "$hasil") "$harapan" | head -n 6 | sed 's/^/       /'
  fi
done
rm -f /tmp/cek_$$ /tmp/cek_$$.log
echo "Hasil: $lulus dari $total latihan cocok."
