# Hands-on Pertemuan 9 — Array Satu Dimensi

Latihan bertingkat untuk fase Hands-on (45 menit) Pertemuan 9 Praktikum Pemrograman (IF25-11002, ITERA). Materinya ada di slide `01 Slide/P9 Array Satu Dimensi.pdf` dan `03 Modul/Modul 09 - Array Satu Dimensi.pdf`.

## Capaian

| Sub-CPMK | CPMK |
|---|---|
| 9.1 Menulis program yang menyimpan data sejenis di array satu dimensi dan memprosesnya dengan perulangan: mengisi, menampilkan, menjumlahkan, mencari maksimum, dan menggeser | CPMK0607 (menerapkan) |
| 9.2 Menelusuri isi array sesudah setiap langkah pemrosesan dan menjelaskan kesalahan indeks, termasuk akses di luar batas | CPMK0608 (menjelaskan) |

## Daftar latihan

| No | File | Tingkat | Waktu | Yang dilatih | Sub-CPMK |
|---|---|---|---|---|---|
| 1 | `handson1-nilai.cpp` | Dasar | 10' | mengisi dan menampilkan, urutan terbalik | 9.1 |
| 2 | `handson2-statistik.cpp` | Menengah | 15' | rata-rata, maksimum, dua putaran | 9.1 |
| 3 | `handson3-geser.cpp` | Tantangan | 20' | telusuri isi array, perbaiki tiga kesalahan indeks | 9.2 |
| + | `bonus-frekuensi.cpp` | Pengayaan | sisa | array sebagai pencacah | 9.1 |

### 1. `handson1-nilai.cpp`

Baca n nilai ke array, tampilkan dengan indeksnya, lalu dalam urutan terbalik.

### 2. `handson2-statistik.cpp`

Hitung rata-rata, nilai tertinggi beserta indeksnya, dan banyak nilai di atas rata-rata.

### 3. `handson3-geser.cpp`

Rotasi kanan yang salah indeks. Gambar isi array sesudah setiap putaran, perbaiki, dan jelaskan.

### Bonus. `bonus-frekuensi.cpp`

Histogram frekuensi nilai per rentang dengan array pencacah.

## Cara mengerjakan

**GDB Online.** Buka [onlinegdb.com](https://www.onlinegdb.com/online_c++_compiler), pilih C++, salin isi satu file dari `latihan/`, lengkapi bagian `TODO`, lalu klik Run. Bila program membaca masukan, ketik isi file yang sama namanya di `input/`. Bandingkan keluaran kalian dengan file di `expected/`, termasuk spasi.

**Komputer sendiri.** Dari folder ini jalankan `bash cek.sh`. Skrip mengompilasi setiap latihan dengan `-std=c++17 -Wall -Werror`, memberi masukan dari `input/`, lalu mencocokkan keluarannya dengan `expected/`. Keluaran yang diharapkan tidak memuat teks masukan, karena masukan dibaca dari file, bukan diketik.

## Aturan

Kerjakan berurutan. Diskusi dengan teman boleh. AI boleh untuk memahami pesan error, tidak untuk meminta solusi utuh. Hands-on tidak dinilai langsung; yang dinilai Exit Ticket 9 dan Tugas 9. Folder `solusi/` dipegang dosen dan tidak ikut di repo.
