# Buffer overflow login example

## Installing dependencies

### Debian based distributions
`sudo apt-get install git cmake make g++`

### Arch Linux based distributions
`sudo pacman -S git cmake make`

### MacOS
`brew install cmake`

## Download source
```sh
git clone https://gitlab.com/ntnu-idri2004/buffer-overflow
```

## Build:
```sh
cd buffer-overflow
mkdir build
cd build
cmake ..
make
```

## Run:
```sh
./login
```
