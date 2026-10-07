# IF25-11002 Praktikum Pemrograman

Praktikum Pemrograman melatih mahasiswa Teknik Informatika menerjemahkan algoritma ke dalam program C++ yang berjalan, lalu menjelaskan mengapa program itu berjalan. Mata kuliah ini berpasangan dengan [Algoritma Pemrograman (IF25-11001)](https://github.com/informatika-itera/IF25-11001-Algoritma-Pemrograman): topik yang sama dibahas di minggu yang sama, Algoritma lewat pseudocode dan flowchart, Praktikum lewat kode C++.

Setiap pertemuan punya tiga bahan yang saling melengkapi: slide di `01 Slide/` untuk kelas, hands-on di `02 Hands-on/` untuk latihan bertingkat, dan modul di `03 Modul/` untuk belajar mandiri. Dokumen resmi mata kuliah ada di akar repo: [Rencana Pembelajaran Semester](Rencana%20Pembelajaran%20Semester.pdf) dan [Kontrak Kuliah](Kontrak%20Kuliah.pdf).

## Identitas Mata Kuliah

| Data | Deskripsi |
|---|---|
| Kode | IF25-11002 |
| Nama | Praktikum Pemrograman |
| Bobot | 2 SKS praktikum (16 pertemuan × 150 menit) |
| Semester | 1 (Ganjil) |
| Prasyarat | Tidak ada |
| Mata kuliah pasangan | IF25-11001 Algoritma Pemrograman |
| Program Studi | S1 Teknik Informatika, Institut Teknologi Sumatera |
| Bahasa dan alat | C++17; GDB Online di kelas, g++ di komputer sendiri (pilihan) |
| Tim pengajar | Tim Pengajar Praktikum Pemrograman, Program Studi Teknik Informatika ITERA |
| Tahun | 2026 |

## Capaian Pembelajaran

**CPL06** — Mampu menganalisis dan mengimplementasi konsep dasar matematika, statistika, algoritma dan sistem komputer sebagai fondasi komputasional.

| CPMK | Deskripsi | Diukur lewat |
|---|---|---|
| CPMK0607 | Mahasiswa mampu **menerapkan** konsep dasar algoritma dan sistem komputer untuk menyelesaikan masalah komputasi | Bagian A setiap instrumen (implementasi kode) |
| CPMK0608 | Mahasiswa mampu **menjelaskan** konsep dasar algoritma dan sistem komputer untuk menyelesaikan masalah komputasi | Bagian B setiap instrumen (tracing dan penjelasan) |

Setiap pertemuan menurunkan dua CPMK ini menjadi Sub-CPMK n.1 (menerapkan) dan n.2 (menjelaskan). Daftar lengkapnya ada di RPS.

## Siklus Setiap Pertemuan

| Fase | Waktu | Isi |
|---|---|---|
| Review | 15 menit | Mengulang pertemuan sebelumnya dan masalah pembuka |
| Struggle | 25 menit | Tantangan yang memancing kebutuhan konsep baru |
| Materi | 40 menit | Penjelasan dengan pola tebak lalu buktikan: setiap contoh kode ditebak dulu keluarannya |
| Hands-on | 45 menit | Latihan bertingkat di `02 Hands-on/` |
| Exit Ticket | 25 menit | Asesmen individual tanpa bantuan |

## Peta 16 Pertemuan

Peta ini disamakan dengan Algoritma Pemrograman agar pasangan topik jatuh di minggu yang sama.

| Pertemuan | Topik Praktikum | Pasangan di Algoritma | Tugas |
|---|---|---|---|
| P1 | Hello World dan Struktur Program C++ | Computational Thinking | Tugas 1: Kartu Perkenalan Digital |
| P2 | Variabel, Tipe Data, Ekspresi, dan Input | Tipe Data, Variabel dan Ekspresi | Tugas 2: Program Pendaftaran Mahasiswa Baru |
| P3 | Operator dan Precedence | Operator dan Precedence | Tugas 3: Kalkulator Lengkap dengan Validasi |
| P4 | Percabangan | Percabangan | Tugas 4: Sistem Tiket Bioskop |
| P5 | Perulangan Bagian 1 | Perulangan Bagian 1 | Tugas 5: Program Statistik Nilai |
| P6 | Perulangan Bagian 2 dan Pola | Perulangan Bagian 2 dan Pattern | Tugas 6: Pattern Generator |
| P7 | Review dan Simulasi UTS | Review dan Simulasi UTS | tanpa tugas (simulasi ujian) |
| P8 | **Ujian Tengah Semester** | UTS | contoh soal, kisi-kisi, kunci di-gitignore |
| P9 | Array Satu Dimensi | Array 1D | Tugas 9: Sistem Nilai Mahasiswa |
| P10 | Array Dua Dimensi dan String | Array 2D dan String | Tugas 10: Sistem Nilai Kelas |
| P11 | Searching | Searching | Tugas 11: Direktori Kontak |
| P12 | Sorting | Sorting | Tugas 12: Sistem Leaderboard |
| P13 | Fungsi dan Modularitas | Fungsi dan Modularitas | Tugas 13: Library Matematika |
| P14 | Rekursi dan Struct | Rekursi dan Struct | Tugas 14: Perpustakaan Mini dengan Struct dan Rekursi |
| P15 | Review dan Simulasi UAS | Review dan Simulasi UAS | tanpa tugas (simulasi ujian) |
| P16 | **Ujian Akhir Semester** | UAS | contoh soal, kisi-kisi, kunci di-gitignore |

## Penilaian

Setiap instrumen dibagi rata menjadi **Bagian A** (implementasi kode, CPMK0607) dan **Bagian B** (tracing dan penjelasan, CPMK0608).

| Komponen | Pelaksanaan | Bobot | CPMK0607 | CPMK0608 |
|---|---|---|---|---|
| Exit Ticket | 14 kali (P1–P7, P9–P15), rata-rata | 25% | 12,5 | 12,5 |
| Tugas | 12 kali (P1–P6, P9–P14), rata-rata | 25% | 12,5 | 12,5 |
| UTS | P8, 4 soal, 120 menit | 25% | 12,5 | 12,5 |
| UAS | P16, 4 soal, 150 menit | 25% | 12,5 | 12,5 |
| **Total** | | **100%** | **50** | **50** |

Karena setiap komponen selalu memberi setengah poinnya ke tiap CPMK, kontribusi setiap CPMK pasti 50 poin. Nilai minimum lulus setiap CPMK adalah 50; di bawah itu ada remedial. Setiap tugas dinilai dengan rubrik empat level (Sangat baik 85–100, Baik 70–84, Cukup 55–69, Kurang di bawah 55) dan lima kriteria: A1 program berjalan (20), A2 dan A3 kriteria isi (15 dan 15), B1 penjelasan (30), dan B2 cerita error dan pengujian (20). Konversi nilai huruf mengikuti A-03 Standar Penilaian Pembelajaran ITERA.

**Penggunaan AI.** Boleh dipakai saat hands-on dan tugas untuk memahami pesan error atau konsep, tidak untuk meminta solusi utuh. Exit Ticket, UTS, dan UAS dikerjakan tanpa AI.

## Bahan per Pertemuan

| P | Slide | Hands-on | Modul |
|---|---|---|---|
| P1 | `01 Slide/P1 Hello World dan Struktur Program C++.pdf` | `02 Hands-on/P1 - Hello World - Hands-on/` | `03 Modul/Modul 01 - Hello World dan Struktur Program C++.pdf` |
| P2 | `01 Slide/P2 Variabel, Tipe Data, Ekspresi, dan Input.pdf` | `02 Hands-on/P2 - Variabel dan Input - Hands-on/` | `03 Modul/Modul 02 - Variabel, Tipe Data, Ekspresi, dan Input.pdf` |
| P3 | `01 Slide/P3 Operator dan Precedence.pdf` | `02 Hands-on/P3 - Operator - Hands-on/` | `03 Modul/Modul 03 - Operator dan Precedence.pdf` |
| P4 | `01 Slide/P4 Percabangan.pdf` | `02 Hands-on/P4 - Percabangan - Hands-on/` | `03 Modul/Modul 04 - Percabangan.pdf` |
| P5 | `01 Slide/P5 Perulangan Bagian 1.pdf` | `02 Hands-on/P5 - Perulangan 1 - Hands-on/` | `03 Modul/Modul 05 - Perulangan Bagian 1.pdf` |
| P6 | `01 Slide/P6 Perulangan Bagian 2 dan Pola.pdf` | `02 Hands-on/P6 - Perulangan 2 dan Pola - Hands-on/` | `03 Modul/Modul 06 - Perulangan Bagian 2 dan Pola.pdf` |
| P7 | `01 Slide/P7 Review dan Simulasi UTS.pdf` | `02 Hands-on/P7 - Review UTS - Hands-on/` | `03 Modul/Modul 07 - Review dan Simulasi UTS.pdf` |
| P8 | `01 Slide/P8 Ujian Tengah Semester.pdf` | `02 Hands-on/P8 - UTS - Contoh Soal - Hands-on/` | `03 Modul/Modul 08 - Ujian Tengah Semester.pdf` |
| P9 | `01 Slide/P9 Array Satu Dimensi.pdf` | `02 Hands-on/P9 - Array 1D - Hands-on/` | `03 Modul/Modul 09 - Array Satu Dimensi.pdf` |
| P10 | `01 Slide/P10 Array Dua Dimensi dan String.pdf` | `02 Hands-on/P10 - Array 2D dan String - Hands-on/` | `03 Modul/Modul 10 - Array Dua Dimensi dan String.pdf` |
| P11 | `01 Slide/P11 Searching.pdf` | `02 Hands-on/P11 - Searching - Hands-on/` | `03 Modul/Modul 11 - Searching.pdf` |
| P12 | `01 Slide/P12 Sorting.pdf` | `02 Hands-on/P12 - Sorting - Hands-on/` | `03 Modul/Modul 12 - Sorting.pdf` |
| P13 | `01 Slide/P13 Fungsi dan Modularitas.pdf` | `02 Hands-on/P13 - Fungsi - Hands-on/` | `03 Modul/Modul 13 - Fungsi dan Modularitas.pdf` |
| P14 | `01 Slide/P14 Rekursi dan Struct.pdf` | `02 Hands-on/P14 - Rekursi dan Struct - Hands-on/` | `03 Modul/Modul 14 - Rekursi dan Struct.pdf` |
| P15 | `01 Slide/P15 Review dan Simulasi UAS.pdf` | `02 Hands-on/P15 - Review UAS - Hands-on/` | `03 Modul/Modul 15 - Review dan Simulasi UAS.pdf` |
| P16 | `01 Slide/P16 Ujian Akhir Semester.pdf` | `02 Hands-on/P16 - UAS - Contoh Soal - Hands-on/` | `03 Modul/Modul 16 - Ujian Akhir Semester.pdf` |

Setiap slide punya pasangan `... - Catatan Pembicara.pdf` untuk tim pengajar.

## Struktur Repo

```
.
├── README.md
├── Rencana Pembelajaran Semester.pdf
├── Kontrak Kuliah.pdf
├── 01 Slide/          # slide PDF dan catatan pembicara; sumber Beamer di src/
├── 02 Hands-on/       # satu folder per pertemuan: latihan/, expected/, input/, cek.sh, README
├── 03 Modul/          # modul belajar mandiri PDF; sumber LaTeX di src/
└── tools/             # generator: data per pertemuan, build.py, dokumen.py, pptx_render.js
```

Folder `solusi/` di setiap hands-on dan berkas `tools/konten/**/*.solusi.cpp` berisi kunci dan tercantum di `.gitignore`, sehingga tidak ikut ter-commit.

## Cara Kerja Hands-on

Setiap folder hands-on berisi `latihan/` (file dengan bagian `TODO`), `expected/` (keluaran yang benar), `input/` (masukan uji bila program membaca `cin`), dan `cek.sh`. Jalankan `bash cek.sh` untuk mengompilasi setiap latihan dengan `-std=c++17 -Wall -Werror`, memberi masukan dari `input/`, dan mencocokkan keluarannya dengan `expected/`. Di GDB Online, bandingkan keluaran secara manual.

## Memperbarui Bahan

Semua bahan dihasilkan dari satu sumber data per pertemuan di `tools/konten/pNN.py` beserta kode hands-on di `tools/konten/pNN/`. Ubah datanya, lalu bangun ulang:

```bash
python3 tools/build.py 5          # slide, catatan, modul, dan hands-on Pertemuan 5
python3 tools/build.py            # semua pertemuan
python3 tools/dokumen.py          # RPS dan Kontrak Kuliah
python3 tools/build.py --spec /tmp/spec && node tools/pptx_render.js /tmp/spec "keluaran-pptx"   # versi PPTX
```

Generator menjamin konsistensi: semua keluaran program dan pesan error di slide dan modul diambil dari kompilasi g++ yang sebenarnya, solusi hands-on harus lulus `cek.sh` sebelum bahan dibuat, dan contoh kode yang terlalu panjang untuk satu slide ditolak. Kebutuhan: Python 3, g++, XeLaTeX (TeX Live), Node.js dengan `pptxgenjs`, serta font Poppins, Open Sans, dan JetBrains Mono (semuanya gratis di Google Fonts). Font yang sama perlu terpasang untuk membuka versi PPTX dengan tampilan yang sesuai.

## Referensi

1. Deitel, P. dan Deitel, H. *C++ How to Program*, edisi ke-10. Pearson.
2. Stroustrup, B. *Programming: Principles and Practice Using C++*, edisi ke-2. Addison-Wesley.
3. Gaddis, T. *Starting Out with C++*. Pearson.
4. [learncpp.com](https://www.learncpp.com/), [cppreference.com](https://cppreference.com/), [GDB Online](https://www.onlinegdb.com/online_c++_compiler)
