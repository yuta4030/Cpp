#!/bin/sh
if [ "$1" = "" ] ; then
	echo "大会ナンバー3桁を入力"
	exit 1
fi

ATCODER_URL=https://beta.atcoder.jp/contests/abc$1/tasks/abc$1_
mkdir -m 777 $1

cp ./sample.cpp ./$1/a.cpp
cp ./sample2.cpp ./$1/b.cpp
cp ./sample2.cpp ./$1/c.cpp
cp ./sample2.cpp ./$1/d.cpp

cd ./$1
sed -i '' -e s#atcoderURL#"$ATCODER_URL"a# a.cpp
sed -i '' -e s#atcoderURL#"$ATCODER_URL"b# b.cpp
sed -i '' -e s#atcoderURL#"$ATCODER_URL"c# c.cpp
sed -i '' -e s#atcoderURL#"$ATCODER_URL"d# d.cpp

echo "g++ -std=c++11 a.cpp -o a" > compile.sh
echo "g++ -std=c++11 b.cpp -o b" >> compile.sh
echo "g++ -std=c++11 c.cpp -o c" >> compile.sh
echo "g++ -std=c++11 d.cpp -o d" >> compile.sh

bash ./compile.sh
