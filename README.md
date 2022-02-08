# Dani-OS
The Operating system of the FUTURE! yey.
# To Compile
1. Download Docker
   ```sh
   sudo apt install docker.io
   ```
   or (windows)
   ```sh
   wget https://desktop.docker.com/win/main/amd64/Docker%20Desktop%20Installer.exe?utm_source=docker&utm_medium=webreferral&utm_campaign=dd-smartbutton&utm_location=header
   ```
   2. Make Image for docker env
   ```sh
   docker build buildenv -t danios1-buildenv
   ```
   3. Run Docker. (Linux)
   ```sh
   docker run --rm -it -v "$(pwd)":/root/env danios1-buildenv
   ```
   Windows
   ```sh
   docker run --rm -it -v "%cd%":/root/env danios1-buildenv
   ```
# Make The ISO
  Assuming you did all the above, run this command.
  ```sh
  make build-x86_64
  ```
  After that the ISO image will be located in the dist/x86_64 folder.
