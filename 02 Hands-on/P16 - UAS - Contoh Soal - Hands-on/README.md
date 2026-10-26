# Hands-on Pertemuan 16 — Ujian Akhir Semester

Latihan bertingkat untuk fase Hands-on (45 menit) Pertemuan 16 Praktikum Pemrograman (IF25-11002, ITERA). Materinya ada di slide `01 Slide/P16 Ujian Akhir Semester.pdf` dan `03 Modul/Modul 16 - Ujian Akhir Semester.pdf`.

## Capaian

| Sub-CPMK | CPMK |
|---|---|
| 16.1 Menyelesaikan masalah komputasi dengan program C++ yang memakai array, string, fungsi, pengurutan, pencarian, rekursi, dan struct | CPMK0607 (menerapkan) |
| 16.2 Menelusuri dan menjelaskan perilaku program yang memakai array, fungsi, dan rekursi | CPMK0608 (menjelaskan) |

## Daftar latihan

| No | File | Tingkat | Waktu | Yang dilatih | Sub-CPMK |
|---|---|---|---|---|---|
| 1 | `soal1-nilai.cpp` | Soal A | 40' | array 2D, fungsi, nilai huruf | Bagian A |
| 2 | `soal2-inventaris.cpp` | Soal A | 45' | struct, bubble sort, binary search, rekursi | Bagian A |
| 3 | `soal3-tracing.cpp` | Soal B | 30' | isi array sesudah fungsi, pohon pemanggilan | Bagian B |
| 4 | `soal4-jelaskan.cpp` | Soal B | 30' | temukan tiga kesalahan, jelaskan akibat, perbaiki | Bagian B |

### 1. `soal1-nilai.cpp`

Rekap nilai tiga komponen per mahasiswa dengan fungsi rata-rata dan fungsi nilai huruf, lalu tampilkan rata-rata tertinggi.

### 2. `soal2-inventaris.cpp`

Inventaris lab sebagai array of struct: urutkan berdasarkan kode, cari tiga kode dengan binary search, dan hitung total dengan fungsi rekursif.

### 3. `soal3-tracing.cpp`

Tulis isi array sesudah fungsi `proses`, gambar pohon pemanggilan `r(4)`, dan tuliskan keluarannya tanpa menjalankan program.

### 4. `soal4-jelaskan.cpp`

Program stok barang memberi hasil salah. Sebutkan tiga kesalahan dengan nomor barisnya, jelaskan akibatnya, dan tulis versi yang benar.

## Cara mengerjakan

**GDB Online.** Buka [onlinegdb.com](https://www.onlinegdb.com/online_c++_compiler), pilih C++, salin isi satu file dari `latihan/`, lengkapi bagian `TODO`, lalu klik Run. Bila program membaca masukan, ketik isi file yang sama namanya di `input/`. Bandingkan keluaran kalian dengan file di `expected/`, termasuk spasi.

**Komputer sendiri.** Dari folder ini jalankan `bash cek.sh`. Skrip mengompilasi setiap latihan dengan `-std=c++17 -Wall -Werror`, memberi masukan dari `input/`, lalu mencocokkan keluarannya dengan `expected/`. Keluaran yang diharapkan tidak memuat teks masukan, karena masukan dibaca dari file, bukan diketik.

## Aturan

Contoh soal ini setara dengan soal UAS. Kerjakan dalam 150 menit tanpa bantuan, seperti kondisi ujian. Soal B dikerjakan di kertas lebih dulu. File soal tracing sudah lulus `cek.sh` apa adanya dan dipakai untuk memeriksa trace table kalian; file soal perbaikan baru lulus setelah diperbaiki. Kunci jawaban (`solusi/`) dipegang dosen dan tidak ikut di repo.
