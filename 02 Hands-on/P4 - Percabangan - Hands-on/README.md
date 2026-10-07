# Hands-on Pertemuan 4 — Percabangan

Latihan bertingkat untuk fase Hands-on (45 menit) Pertemuan 4 Praktikum Pemrograman (IF25-11002, ITERA). Materinya ada di slide `01 Slide/P4 Percabangan.pdf` dan `03 Modul/Modul 04 - Percabangan.pdf`.

## Capaian

| Sub-CPMK | CPMK |
|---|---|
| 4.1 Menulis program yang memilih tindakan dengan `if`, `if-else`, rantai `else if`, `switch`, dan operator ternary sesuai syarat masalah | CPMK0607 (menerapkan) |
| 4.2 Menjelaskan cabang mana yang dijalankan untuk masukan tertentu dan merancang data uji yang mencakup setiap cabang dan nilai batasnya | CPMK0608 (menjelaskan) |

## Daftar latihan

| No | File | Tingkat | Waktu | Yang dilatih | Sub-CPMK |
|---|---|---|---|---|---|
| 1 | `handson1-lulus.cpp` | Dasar | 10' | `if-else` dan `if` terpisah | 4.1 |
| 2 | `handson2-huruf.cpp` | Menengah | 15' | rantai `else if`, nilai batas | 4.1 |
| 3 | `handson3-tiket.cpp` | Tantangan | 20' | perbaiki tiga kesalahan logika percabangan | 4.2 |
| + | `bonus-kalkulator.cpp` | Pengayaan | sisa | `switch` pada `char`, `default` | 4.1 |

### 1. `handson1-lulus.cpp`

Tentukan lulus atau tidak, lalu tambahkan pesan khusus untuk nilai istimewa. Masukan uji: `88`.

### 2. `handson2-huruf.cpp`

Ubah lima nilai ke nilai huruf ITERA, termasuk nilai tidak valid. Perulangan `for` sudah disediakan.

### 3. `handson3-tiket.cpp`

Program harga tiket bioskop punya tiga kesalahan, termasuk `=` yang seharusnya `==`. Perbaiki dan jelaskan.

### Bonus. `bonus-kalkulator.cpp`

Kalkulator lima operator dengan penanganan pembagian nol dan operator tidak dikenal.

## Cara mengerjakan

**GDB Online.** Buka [onlinegdb.com](https://www.onlinegdb.com/online_c++_compiler), pilih C++, salin isi satu file dari `latihan/`, lengkapi bagian `TODO`, lalu klik Run. Bila program membaca masukan, ketik isi file yang sama namanya di `input/`. Bandingkan keluaran kalian dengan file di `expected/`, termasuk spasi.

**Komputer sendiri.** Dari folder ini jalankan `bash cek.sh`. Skrip mengompilasi setiap latihan dengan `-std=c++17 -Wall -Werror`, memberi masukan dari `input/`, lalu mencocokkan keluarannya dengan `expected/`. Keluaran yang diharapkan tidak memuat teks masukan, karena masukan dibaca dari file, bukan diketik.

## Aturan

Kerjakan berurutan. Diskusi dengan teman boleh. AI boleh untuk memahami pesan error, tidak untuk meminta solusi utuh. Hands-on tidak dinilai langsung; yang dinilai Exit Ticket 4 dan Tugas 4. Folder `solusi/` dipegang dosen dan tidak ikut di repo.
