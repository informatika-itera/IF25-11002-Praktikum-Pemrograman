# Hands-on Pertemuan 7 — Review dan Simulasi UTS

Latihan bertingkat untuk fase Hands-on (45 menit) Pertemuan 7 Praktikum Pemrograman (IF25-11002, ITERA). Materinya ada di slide `01 Slide/P7 Review dan Simulasi UTS.pdf` dan `03 Modul/Modul 07 - Review dan Simulasi UTS.pdf`.

## Capaian

| Sub-CPMK | CPMK |
|---|---|
| 7.1 Menyelesaikan masalah yang menggabungkan masukan, ekspresi, percabangan, dan perulangan dalam satu program C++ dalam batas waktu ujian | CPMK0607 (menerapkan) |
| 7.2 Menelusuri program yang menggabungkan percabangan dan perulangan bersarang, lalu menjelaskan setiap perubahan nilai dengan istilah yang tepat | CPMK0608 (menjelaskan) |

## Daftar latihan

| No | File | Tingkat | Waktu | Yang dilatih | Sub-CPMK |
|---|---|---|---|---|---|
| 1 | `handson1-parkir.cpp` | Dasar | 20' | masukan, `/` dan `%`, `else if` | 7.1 |
| 2 | `handson2-digit.cpp` | Menengah | 15' | `while` dengan pola digit | 7.1 |
| 3 | `handson3-telusur.cpp` | Tantangan | 10' | trace table bersarang dengan `continue` dan `break` | 7.2 |
| + | `bonus-menu.cpp` | Pengayaan | sisa | menu `do-while`, validasi | 7.1 |

### 1. `handson1-parkir.cpp`

Tarif parkir motor dan mobil dengan pembulatan jam ke atas. Kerjakan tanpa bantuan sebagai simulasi soal A.

### 2. `handson2-digit.cpp`

Hitung banyak digit, jumlah digit, digit terbesar, dan bilangan dibalik.

### 3. `handson3-telusur.cpp`

Simulasi soal B: tulis trace table dan perkiraan keluaran sebelum menjalankan. File ini sudah lulus `cek.sh`; yang dinilai adalah tracing kalian.

### Bonus. `bonus-menu.cpp`

ATM mini dengan cek saldo, setor, dan tarik yang divalidasi.

## Cara mengerjakan

**GDB Online.** Buka [onlinegdb.com](https://www.onlinegdb.com/online_c++_compiler), pilih C++, salin isi satu file dari `latihan/`, lengkapi bagian `TODO`, lalu klik Run. Bila program membaca masukan, ketik isi file yang sama namanya di `input/`. Bandingkan keluaran kalian dengan file di `expected/`, termasuk spasi.

**Komputer sendiri.** Dari folder ini jalankan `bash cek.sh`. Skrip mengompilasi setiap latihan dengan `-std=c++17 -Wall -Werror`, memberi masukan dari `input/`, lalu mencocokkan keluarannya dengan `expected/`. Keluaran yang diharapkan tidak memuat teks masukan, karena masukan dibaca dari file, bukan diketik.

## Aturan

Kerjakan berurutan. Diskusi dengan teman boleh. AI boleh untuk memahami pesan error, tidak untuk meminta solusi utuh. Hands-on tidak dinilai langsung; yang dinilai Exit Ticket 7. Folder `solusi/` dipegang dosen dan tidak ikut di repo.
