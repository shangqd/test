# setup boost
```bash
tar xvf boost_1_73_0.tar.gz
cd boost_1_73_0/
./bootstrap.sh --prefix=/opt/boost
./b2 install
```

# cmake project
```bash
export BOOST_ROOT=/opt/boost
mkdir build
cmake .. -DCMAKE_BUILD_TYPE=Debug
```