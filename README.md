# Nano Clock

A compact, internet-connected digital clock built with the Seeed Studio XIAO ESP32S3 and a 0.91-inch OLED display. The clock synchronizes time using NTP (Network Time Protocol), ensuring accurate timekeeping without the need for an RTC (Real-Time Clock) module. The design is inspired by [Scott Yu-Jan's iPhone Standby Mode Dock](https://www.youtube.com/watch?v=L3nWw8qSYgk&t=30s), blending minimalism with functionality.

## Features and Development Roadmap

This project is considered complete, the following outlines the current features and potential future improvements:

### Current Features
- Internet Time Sync: Fetches real-time data using NTP for accurate timekeeping.
- OLED Display: Displays time in HH:MM:SS format on a 128x32 SSD1306 OLED.
- Compact Design: Small footprint which ideal for desks.

### Future Improvements
- Offline Mode with Manual Configuration Button: Allow users to set the time manually without requiring an internet connection.
- Temperature Sensor Integration: Add a sensor to display real-time temperature readings on the OLED.

## License

This project is Distributed under the MIT License - see the [LICENSE](LICENSE) file for information.

## Support

If you are having problems, please let me know by [raising a new issue](https://github.com/ImSeanConroy/nano-clock/issues/new/choose).