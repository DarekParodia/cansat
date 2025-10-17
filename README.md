# 🚀 CanSat Firmware Project

jakis deskrypszyn


## ⚙️ Requirements

- [PlatformIO Core](https://platformio.org/install/cli) or the [VS Code PlatformIO IDE](https://platformio.org/platformio-ide)
- Python 3.11+ (recommended)
- Płytka cansatowa albo jakas rp2040



## 🛠️ Build & Upload

To **build** the firmware:

```bash
pio run
```

To **upload** it to your connected board:

```bash
pio run --target upload
```

To **open the serial monitor**:

```bash
pio device monitor
```

---


## 📦 Artifacts

After a successful CI build, you’ll find the firmware files in:

```
.pio/build/pico/
```

or in the GitHub Actions “Artifacts” section, named:

```
firmware-binaries
```

# Jak to sie programuje iwgl i inne takie

dobra pomijajac tamto gowno wygenerowane przez chatagpt no to tak

Foldery:
 - ```core``` - tam są rzeczy systemowe tego nie tykać (rzeczy typu integracja modułów, komunikacja z jakimis rzeczami itp.)

 - ```user``` - tu sie dzieje magia taka jak np sterowanie klapami, otwieranie spadochronu iwgl