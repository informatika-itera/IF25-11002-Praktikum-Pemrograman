# Hands-on Pertemuan 1 — Hello World dan Struktur Program C++

Latihan bertingkat untuk fase Hands-on (45 menit) Pertemuan 1 Praktikum Pemrograman (IF25-11002, ITERA). Materinya ada di slide `01 Slide/P1 Hello World dan Struktur Program C++.pdf` dan `03 Modul/Modul 01 - Hello World dan Struktur Program C++.pdf`.

## Capaian

| Sub-CPMK | CPMK |
|---|---|
| 1.1 Menulis, mengompilasi, dan menjalankan program C++ yang menampilkan keluaran terformat dengan `cout`, `endl`, dan escape sequence | CPMK0607 (menerapkan) |
| 1.2 Menjelaskan peran setiap bagian program C++ dan alur dari kode sumber sampai program berjalan, termasuk membaca pesan error kompilasi | CPMK0608 (menjelaskan) |

## Daftar latihan

| No | File | Tingkat | Waktu | Yang dilatih | Sub-CPMK |
|---|---|---|---|---|---|
| 1 | `handson1-biodata.cpp` | Dasar | 10' | `cout`, `endl`, tiga baris keluaran | 1.1 |
| 2 | `handson2-kartu.cpp` | Menengah | 15' | garis pembatas, perataan, `\t`, `\"` | 1.1 |
| 3 | `handson3-perbaiki.cpp` | Tantangan | 20' | lima kesalahan, perbaiki dan jelaskan | 1.2 |
| + | `bonus-rumah.cpp` | Pengayaan | sisa | `\\` di dalam ASCII art | 1.1 |

### 1. `handson1-biodata.cpp`

Tampilkan biodata contoh tiga baris persis seperti di `expected/`.

### 2. `handson2-kartu.cpp`

Lengkapi kartu mahasiswa: titik dua rata, baris Motto diawali tab dan memakai kutip ganda yang ikut tampil.

### 3. `handson3-perbaiki.cpp`

Program punya lima kesalahan: tiga error kompilasi dan dua peringatan. Perbaiki satu per satu, lalu isi blok `PENJELASAN` dengan kalimat kalian sendiri.

### Bonus. `bonus-rumah.cpp`

Gambar rumah ASCII enam baris; garis miring terbalik ditulis dua kali.

## Cara mengerjakan

**GDB Online.** Buka [onlinegdb.com](https://www.onlinegdb.com/online_c++_compiler), pilih C++, salin isi satu file dari `latihan/`, lengkapi bagian `TODO`, lalu klik Run. Bandingkan keluaran kalian dengan file di `expected/`, termasuk spasi.

**Komputer sendiri.** Dari folder ini jalankan `bash cek.sh`. Skrip mengompilasi setiap latihan dengan `-std=c++17 -Wall -Werror`, lalu mencocokkan keluarannya dengan `expected/`.

## Aturan

Kerjakan berurutan. Diskusi dengan teman boleh. AI boleh untuk memahami pesan error, tidak untuk meminta solusi utuh. Hands-on tidak dinilai langsung; yang dinilai Exit Ticket 1 dan Tugas 1. Folder `solusi/` dipegang dosen dan tidak ikut di repo.
