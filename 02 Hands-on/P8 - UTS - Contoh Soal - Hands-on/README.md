# Hands-on Pertemuan 8 — Ujian Tengah Semester

Latihan bertingkat untuk fase Hands-on (45 menit) Pertemuan 8 Praktikum Pemrograman (IF25-11002, ITERA). Materinya ada di slide `01 Slide/P8 Ujian Tengah Semester.pdf` dan `03 Modul/Modul 08 - Ujian Tengah Semester.pdf`.

## Capaian

| Sub-CPMK | CPMK |
|---|---|
| 8.1 Menyelesaikan masalah komputasi dengan program C++ yang memakai variabel, ekspresi, percabangan, dan perulangan | CPMK0607 (menerapkan) |
| 8.2 Menelusuri dan menjelaskan perilaku program yang memakai percabangan dan perulangan | CPMK0608 (menjelaskan) |

## Daftar latihan

| No | File | Tingkat | Waktu | Yang dilatih | Sub-CPMK |
|---|---|---|---|---|---|
| 1 | `soal1-ongkir.cpp` | Soal A | 30' | masukan, pembulatan, `switch`, potongan | Bagian A |
| 2 | `soal2-statistik.cpp` | Soal A | 30' | sentinel, akumulator, maks-min, dua desimal | Bagian A |
| 3 | `soal3-tracing.cpp` | Soal B | 25' | trace table dengan `if-else` dan `break` | Bagian B |
| 4 | `soal4-jelaskan.cpp` | Soal B | 25' | temukan tiga kesalahan, jelaskan akibat, perbaiki | Bagian B |

### 1. `soal1-ongkir.cpp`

Hitung ongkos kirim dari berat (gram) dan zona dengan pembulatan ke atas per kilogram dan potongan 10% untuk paket di atas 10 kg.

### 2. `soal2-statistik.cpp`

Baca suhu harian sampai 999, lalu tampilkan banyak hari, rata-rata, banyak hari panas, dan selisih tertinggi-terendah.

### 3. `soal3-tracing.cpp`

Buat trace table untuk `x`, `y`, dan `i`, lalu tuliskan keluaran program tanpa menjalankannya.

### 4. `soal4-jelaskan.cpp`

Program rata-rata nilai lulus memberi hasil salah. Sebutkan tiga kesalahan dengan nomor barisnya, jelaskan akibatnya, dan tulis versi yang benar.

## Cara mengerjakan

**GDB Online.** Buka [onlinegdb.com](https://www.onlinegdb.com/online_c++_compiler), pilih C++, salin isi satu file dari `latihan/`, lengkapi bagian `TODO`, lalu klik Run. Bila program membaca masukan, ketik isi file yang sama namanya di `input/`. Bandingkan keluaran kalian dengan file di `expected/`, termasuk spasi.

**Komputer sendiri.** Dari folder ini jalankan `bash cek.sh`. Skrip mengompilasi setiap latihan dengan `-std=c++17 -Wall -Werror`, memberi masukan dari `input/`, lalu mencocokkan keluarannya dengan `expected/`. Keluaran yang diharapkan tidak memuat teks masukan, karena masukan dibaca dari file, bukan diketik.

## Aturan

Contoh soal ini setara dengan soal UTS. Kerjakan dalam 120 menit tanpa bantuan, seperti kondisi ujian. Soal B dikerjakan di kertas lebih dulu. File soal tracing sudah lulus `cek.sh` apa adanya dan dipakai untuk memeriksa trace table kalian; file soal perbaikan baru lulus setelah diperbaiki. Kunci jawaban (`solusi/`) dipegang dosen dan tidak ikut di repo.
