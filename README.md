# omikuji.cpp
おみくじです！正月も！正月以外も！
---

# おみくじ

C++で動く、年越し用おみくじプログラムです。  
**動けば何でもOK**。環境・流派・宗派は問いません。

---

## スマホで実行する方法

ブラウザだけで動きます。インストール不要。

### 手順
1. 下のサイトを開く  
   https://www.onlinegdb.com/online_c++_compiler

2. 左のエディタに `omikuji.cpp` の中身をそのままコピペ

3. 右上の **Run ▶️** を押す

4. 下のコンソールにおみくじが表示されます 🎍

※ iPhone / Android 対応  
※ 日本語・絵文字（⛩など）も表示されます

---

## パソコンで実行する方法（例）

### g++
bash
g++ omikuji.cpp -o omikuji
./omikuji

clang++（macOS など）

clang++ omikuji.cpp -o omikuji
./omikuji

Visual Studio（Windows）

新規 C++ コンソールプロジェクトを作成

omikuji.cpp を追加

実行


CMake を使う場合（やりたい人向け）

cmake_minimum_required(VERSION 3.10)
project(omikuji)
add_executable(omikuji omikuji.cpp)

mkdir build
cd build
cmake ..
cmake --build .
./omikuji

※ CMakeは必須ではありません。


---

その他の実行方法

以下もすべてOK！

Compiler Explorer

Docker

WSL

任意のオンラインC++実行環境

学校・研究室の環境


C++としてコンパイルできれば基本的に動きます。

深い知識は不要

main があって動けば勝ち

ビルド方法は宗教なので気にしない

引いて楽しみましょう！

---
