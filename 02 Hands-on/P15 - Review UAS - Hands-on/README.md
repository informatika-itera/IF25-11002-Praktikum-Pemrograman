# Hands-on Pertemuan 15 — Review dan Simulasi UAS

Latihan bertingkat untuk fase Hands-on (45 menit) Pertemuan 15 Praktikum Pemrograman (IF25-11002, ITERA). Materinya ada di slide `01 Slide/P15 Review dan Simulasi UAS.pdf` dan `03 Modul/Modul 15 - Review dan Simulasi UAS.pdf`.

## Capaian

| Sub-CPMK | CPMK |
|---|---|
| 15.1 Menyelesaikan masalah yang menggabungkan array, string, fungsi, pengurutan atau pencarian, dan struct dalam satu program C++ dalam batas waktu ujian | CPMK0607 (menerapkan) |
| 15.2 Menelusuri program yang memakai array, fungsi, dan rekursi, lalu menjelaskan setiap perubahan nilai dengan istilah yang tepat | CPMK0608 (menjelaskan) |

## Daftar latihan

| No | File | Tingkat | Waktu | Yang dilatih | Sub-CPMK |
|---|---|---|---|---|---|
| 1 | `handson1-kata.cpp` | Dasar | 20' | array string, fungsi, karakter pertama | 15.1 |
| 2 | `handson2-ranking.cpp` | Menengah | 20' | struct, fungsi pengurutan, pencarian | 15.1 |
| 3 | `handson3-telusur.cpp` | Tantangan | 10' | pohon pemanggilan dan isi array | 15.2 |
| + | `bonus-matriks.cpp` | Pengayaan | sisa | fungsi dengan parameter array 2D | 15.1 |

### 1. `handson1-kata.cpp`

Kata terpanjang lewat fungsi dan semua kata yang diawali vokal. Simulasi soal A.

### 2. `handson2-ranking.cpp`

Ranking peserta dengan array of struct, fungsi selection sort, dan pencarian nama.

### 3. `handson3-telusur.cpp`

Simulasi soal B: gambar pohon pemanggilan dan isi array, tulis perkiraan keluaran sebelum menjalankan. File ini sudah lulus `cek.sh`; yang dinilai adalah tracing kalian.

### Bonus. `bonus-matriks.cpp`

Periksa apakah matriks simetris lewat fungsi `bool`, lalu tampilkan jumlah setiap baris.

## Cara mengerjakan

**GDB Online.** Buka [onlinegdb.com](https://www.onlinegdb.com/online_c++_compiler), pilih C++, salin isi satu file dari `latihan/`, lengkapi bagian `TODO`, lalu klik Run. Bila program membaca masukan, ketik isi file yang sama namanya di `input/`. Bandingkan keluaran kalian dengan file di `expected/`, termasuk spasi.

**Komputer sendiri.** Dari folder ini jalankan `bash cek.sh`. Skrip mengompilasi setiap latihan dengan `-std=c++17 -Wall -Werror`, memberi masukan dari `input/`, lalu mencocokkan keluarannya dengan `expected/`. Keluaran yang diharapkan tidak memuat teks masukan, karena masukan dibaca dari file, bukan diketik.

## Aturan

Kerjakan berurutan. Diskusi dengan teman boleh. AI boleh untuk memahami pesan error, tidak untuk meminta solusi utuh. Hands-on tidak dinilai langsung; yang dinilai Exit Ticket 15. Folder `solusi/` dipegang dosen dan tidak ikut di repo.
