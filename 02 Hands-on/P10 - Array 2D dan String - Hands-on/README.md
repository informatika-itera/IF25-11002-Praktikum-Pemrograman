# Hands-on Pertemuan 10 — Array Dua Dimensi dan String

Latihan bertingkat untuk fase Hands-on (45 menit) Pertemuan 10 Praktikum Pemrograman (IF25-11002, ITERA). Materinya ada di slide `01 Slide/P10 Array Dua Dimensi dan String.pdf` dan `03 Modul/Modul 10 - Array Dua Dimensi dan String.pdf`.

## Capaian

| Sub-CPMK | CPMK |
|---|---|
| 10.1 Menulis program yang memproses data tabel dengan array dua dimensi dan mengolah teks dengan `string`: mengakses karakter, menghitung, mengubah huruf, dan memakai fungsi anggota `string` | CPMK0607 (menerapkan) |
| 10.2 Menelusuri indeks baris dan kolom yang diakses pada perulangan bersarang, serta menjelaskan pemrosesan string karakter demi karakter | CPMK0608 (menjelaskan) |

## Daftar latihan

| No | File | Tingkat | Waktu | Yang dilatih | Sub-CPMK |
|---|---|---|---|---|---|
| 1 | `handson1-matriks.cpp` | Dasar | 10' | baca dan tampilkan array 2D, total baris | 10.1 |
| 2 | `handson2-kata.cpp` | Menengah | 15' | `getline`, akses karakter, `cctype` | 10.1 |
| 3 | `handson3-transpos.cpp` | Tantangan | 20' | telusuri indeks [b][k], perbaiki tiga kesalahan | 10.2 |
| + | `bonus-palindrom.cpp` | Pengayaan | sisa | membandingkan karakter dari dua ujung | 10.1 |

### 1. `handson1-matriks.cpp`

Baca nilai 3 mahasiswa × 4 kuis, tampilkan tabel dengan total per mahasiswa.

### 2. `handson2-kata.cpp`

Hitung panjang, vokal, dan kata dari satu kalimat, lalu ubah ke huruf kapital.

### 3. `handson3-transpos.cpp`

Transpos dan diagonal matriks 3 × 3 yang salah indeks. Tulis indeks yang dibaca di setiap langkah, perbaiki, dan jelaskan.

### Bonus. `bonus-palindrom.cpp`

Periksa apakah setiap kata palindrom tanpa membedakan huruf besar-kecil.

## Cara mengerjakan

**GDB Online.** Buka [onlinegdb.com](https://www.onlinegdb.com/online_c++_compiler), pilih C++, salin isi satu file dari `latihan/`, lengkapi bagian `TODO`, lalu klik Run. Bila program membaca masukan, ketik isi file yang sama namanya di `input/`. Bandingkan keluaran kalian dengan file di `expected/`, termasuk spasi.

**Komputer sendiri.** Dari folder ini jalankan `bash cek.sh`. Skrip mengompilasi setiap latihan dengan `-std=c++17 -Wall -Werror`, memberi masukan dari `input/`, lalu mencocokkan keluarannya dengan `expected/`. Keluaran yang diharapkan tidak memuat teks masukan, karena masukan dibaca dari file, bukan diketik.

## Aturan

Kerjakan berurutan. Diskusi dengan teman boleh. AI boleh untuk memahami pesan error, tidak untuk meminta solusi utuh. Hands-on tidak dinilai langsung; yang dinilai Exit Ticket 10 dan Tugas 10. Folder `solusi/` dipegang dosen dan tidak ikut di repo.
