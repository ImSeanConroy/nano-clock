# Nano Clock

A compact, internet-connected digital clock built with the Seeed Studio XIAO ESP32S3 and a 0.91-inch OLED display. The clock synchronizes time using NTP (Network Time Protocol), ensuring accurate timekeeping without the need for an RTC (Real-Time Clock) module. The design is inspired by [Scott Yu-Jan's iPhone Standby Mode Dock](https://www.youtube.com/watch?v=L3nWw8qSYgk&t=30s), blending minimalism with functionality.

![Project Image](https://github.com/ImSeanConroy/nano-clock/blob/main/.github/repo-img.png)

## Features and Future Improvements

This project is considered complete, the following outlines the current features and potential future improvements:

### Current Features
- Internet Time Sync: Fetches real-time data using NTP for accurate timekeeping.
- OLED Display: Displays time in HH:MM:SS format on a 128x32 SSD1306 OLED.
- Compact Design: Small footprint which ideal for desks.

### Future Improvements
- Offline Mode with Manual Configuration Button: Allow users to set the time manually without requiring an internet connection.
- Temperature Sensor Integration: Add a sensor to display real-time temperature readings on the OLED.
- IoT intergration: Look at possible IoT intergration to sending and recieving messages or alerts.
- Custom PCB Design or Improved design: Research creating custom PCB or design case for easier assembly.

## Getting Started

1. **Get the Components** - Purchase the components from the BOM and a compatible board.
2. **3D Print the Case** - Download the STL files for your chosen configuration and print them on a 3D printer.
3. **Assemble the Hardware** - Solder the components and assemble the board and case.
4. **Upload the Firmware** - Connect the board via USB and upload the firmware.

## Required Components

The following are the required components to build the nano clock:

| Quantity | Component | Description | Source |
| - | - | - | - |
| 1 | Seeed XIAO ESP32C3 | Microcontroller board | [PiHut](https://thepihut.com/products/seeed-xiao-esp32c3?variant=53975115661697) |
| 1 | 0.91" OLED Display Module | Display | [Amazon](https://www.amazon.co.uk/DollaTek-Display-SSD1306-3-3V-5V-Arduino/dp/B07MHGPNVT/ref=sr_1_6) |

## Contributing

Contributions are welcome. Please open an issue or submit a pull request for any enhancements or bug fixes.

## License

This project is Distributed under the MIT License - see the [LICENSE](LICENSE) file for information.

## Support

If you are having problems, please let me know by [raising a new issue](https://github.com/ImSeanConroy/nano-clock/issues/new/choose).