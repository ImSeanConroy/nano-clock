# Nano Clock

A compact, internet-connected digital clock built with the Seeed Studio XIAO ESP32S3 and a 0.91-inch OLED display. The clock synchronizes time using NTP (Network Time Protocol), ensuring accurate timekeeping without the need for an RTC (Real-Time Clock) module. The design is inspired by [Scott Yu-Jan's iPhone Standby Mode Dock](https://www.youtube.com/watch?v=L3nWw8qSYgk&t=30s), blending minimalism with functionality.

![Project Image](https://github.com/ImSeanConroy/nano-clock/blob/main/.github/repo-img.png)

## Getting Started

1. **Purchase Required Components** - To build the Nano Clock, you will need the following components and a 3D printer:
- [Seeed Studio XIAO ESP32S3](https://thepihut.com/products/seeed-studio-xiao-esp32s3?variant=42421895102659)
- [0.91-inch SSD1306 OLED display (128x32 resolution)](https://thepihut.com/products/0-91-oled-display-module)
- [Wires and connectors as needed](https://thepihut.com/products/prototyping-wire-spool-set)

1. **Download STL Files** - Obtain the necessary 3D printable files from the project repository.

2. **Slice and Print** - Slice and print the case files in your chosen color, Adjusting print settings based on your printer and filament type.

3. **Soldering and Assembly** - Solder the OLED display to the XIAO ESP32S3 and assemble the components into the 3D printed case.

4. **Install Firmware** - Download and install either `internet_clock` or `basic_clock` configuring wifi credential or time resectively

## Features and Future Improvements

This project is considered complete, the following outlines the current features and potential future improvements:

### Current Features
- Internet Time Sync: Fetches real-time data using NTP for accurate timekeeping.
- OLED Display: Displays time in HH:MM:SS format on a 128x32 SSD1306 OLED.
- Compact Design: Small footprint which ideal for desks.

### Future Improvements
- Offline Mode with Manual Configuration Button: Allow users to set the time manually without requiring an internet connection.
- Temperature Sensor Integration: Add a sensor to display real-time temperature readings on the OLED.

## Contributing

Contributions are welcome. Please open an issue or submit a pull request for any enhancements or bug fixes.

## License

This project is Distributed under the MIT License - see the [LICENSE](LICENSE) file for information.

## Support

If you are having problems, please let me know by [raising a new issue](https://github.com/ImSeanConroy/nano-clock/issues/new/choose).