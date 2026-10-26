# Hands-on Pertemuan 13 — Fungsi dan Modularitas

Latihan bertingkat untuk fase Hands-on (45 menit) Pertemuan 13 Praktikum Pemrograman (IF25-11002, ITERA). Materinya ada di slide `01 Slide/P13 Fungsi dan Modularitas.pdf` dan `03 Modul/Modul 13 - Fungsi dan Modularitas.pdf`.

## Capaian

| Sub-CPMK | CPMK |
|---|---|
| 13.1 Menulis program yang dipecah menjadi fungsi dengan parameter dan nilai kembali yang tepat, termasuk fungsi `void`, fungsi `bool`, parameter referensi, dan parameter array | CPMK0607 (menerapkan) |
| 13.2 Menelusuri aliran nilai pada pemanggilan fungsi dan menjelaskan perbedaan pass by value dan pass by reference serta jangkauan variabel lokal | CPMK0608 (menjelaskan) |

## Daftar latihan

| No | File | Tingkat | Waktu | Yang dilatih | Sub-CPMK |
|---|---|---|---|---|---|
| 1 | `handson1-bangun.cpp` | Dasar | 10' | fungsi `void` dan fungsi dengan `return` | 13.1 |
| 2 | `handson2-prima.cpp` | Menengah | 15' | fungsi `bool`, prototipe, array sebagai parameter | 13.1 |
| 3 | `handson3-referensi.cpp` | Tantangan | 20' | telusuri parameter, perbaiki tiga kesalahan fungsi | 13.2 |
| + | `bonus-statistik.cpp` | Pengayaan | sisa | pustaka fungsi untuk array | 13.1 |

### 1. `handson1-bangun.cpp`

Tiga fungsi bangun datar dan garis, dipanggil dari `main`.

### 2. `handson2-prima.cpp`

Fungsi `isPrima` dan `hitungPrima` dengan prototipe di atas `main`.

### 3. `handson3-referensi.cpp`

Tiga fungsi dengan kesalahan pass by value, pembagian bulat, dan jalur tanpa `return`. Telusuri, perbaiki, dan jelaskan.

### Bonus. `bonus-statistik.cpp`

Fungsi minimum, maksimum, rata-rata, dan pengurutan untuk satu array.

## Cara mengerjakan

**GDB Online.** Buka [onlinegdb.com](https://www.onlinegdb.com/online_c++_compiler), pilih C++, salin isi satu file dari `latihan/`, lengkapi bagian `TODO`, lalu klik Run. Bila program membaca masukan, ketik isi file yang sama namanya di `input/`. Bandingkan keluaran kalian dengan file di `expected/`, termasuk spasi.

**Komputer sendiri.** Dari folder ini jalankan `bash cek.sh`. Skrip mengompilasi setiap latihan dengan `-std=c++17 -Wall -Werror`, memberi masukan dari `input/`, lalu mencocokkan keluarannya dengan `expected/`. Keluaran yang diharapkan tidak memuat teks masukan, karena masukan dibaca dari file, bukan diketik.

## Aturan

Kerjakan berurutan. Diskusi dengan teman boleh. AI boleh untuk memahami pesan error, tidak untuk meminta solusi utuh. Hands-on tidak dinilai langsung; yang dinilai Exit Ticket 13 dan Tugas 13. Folder `solusi/` dipegang dosen dan tidak ikut di repo.
