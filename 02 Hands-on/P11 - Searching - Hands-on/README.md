# Hands-on Pertemuan 11 — Searching

Latihan bertingkat untuk fase Hands-on (45 menit) Pertemuan 11 Praktikum Pemrograman (IF25-11002, ITERA). Materinya ada di slide `01 Slide/P11 Searching.pdf` dan `03 Modul/Modul 11 - Searching.pdf`.

## Capaian

| Sub-CPMK | CPMK |
|---|---|
| 11.1 Menulis program yang mencari data pada array dengan linear search dan binary search, termasuk mencari semua kemunculan dan menangani data yang tidak ditemukan | CPMK0607 (menerapkan) |
| 11.2 Menelusuri langkah binary search dengan trace table low, high, dan mid, serta menjelaskan perbedaan banyak perbandingan kedua algoritma | CPMK0608 (menjelaskan) |

## Daftar latihan

| No | File | Tingkat | Waktu | Yang dilatih | Sub-CPMK |
|---|---|---|---|---|---|
| 1 | `handson1-cari.cpp` | Dasar | 10' | linear search, hasil -1, hitung perbandingan | 11.1 |
| 2 | `handson2-nama.cpp` | Menengah | 15' | mencari semua kemunculan string | 11.1 |
| 3 | `handson3-biner.cpp` | Tantangan | 20' | trace low-high-mid, perbaiki tiga kesalahan | 11.2 |
| + | `bonus-banding.cpp` | Pengayaan | sisa | menghitung perbandingan dua algoritma | 11.1 |

### 1. `handson1-cari.cpp`

Linear search dengan kasus ditemukan dan tidak ditemukan, serta banyak perbandingan.

### 2. `handson2-nama.cpp`

Cari semua posisi sebuah nama di daftar hadir dan banyak kemunculannya.

### 3. `handson3-biner.cpp`

Binary search dengan tiga kesalahan. Buat trace table untuk dua pencarian, perbaiki, dan jelaskan.

### Bonus. `bonus-banding.cpp`

Bandingkan banyak perbandingan linear dan binary search untuk empat nilai.

## Cara mengerjakan

**GDB Online.** Buka [onlinegdb.com](https://www.onlinegdb.com/online_c++_compiler), pilih C++, salin isi satu file dari `latihan/`, lengkapi bagian `TODO`, lalu klik Run. Bila program membaca masukan, ketik isi file yang sama namanya di `input/`. Bandingkan keluaran kalian dengan file di `expected/`, termasuk spasi.

**Komputer sendiri.** Dari folder ini jalankan `bash cek.sh`. Skrip mengompilasi setiap latihan dengan `-std=c++17 -Wall -Werror`, memberi masukan dari `input/`, lalu mencocokkan keluarannya dengan `expected/`. Keluaran yang diharapkan tidak memuat teks masukan, karena masukan dibaca dari file, bukan diketik.

## Aturan

Kerjakan berurutan. Diskusi dengan teman boleh. AI boleh untuk memahami pesan error, tidak untuk meminta solusi utuh. Hands-on tidak dinilai langsung; yang dinilai Exit Ticket 11 dan Tugas 11. Folder `solusi/` dipegang dosen dan tidak ikut di repo.
