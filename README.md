# Wokwi-Chip-Mux-8-to-1-Digital

## Description

This chip connects 1 of 8 digital inputs to a single output. When Select = 0 (default), the output is disabled (0).

![image](https://user-images.githubusercontent.com/63488701/217562982-f879e8a9-694f-462e-930c-6e03e275826e.png)

| Select | D8   | D7   | D6   | D5   | D4   | D3   | D2   | D1   | OUT  |
| ------ | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| 0      | X    | X    | X    | X    | X    | X    | X    | X    | 0    |
| 1      | X    | X    | X    | X    | X    | X    | X    | 0    | 0    |
| 1      | X    | X    | X    | X    | X    | X    | X    | 1    | 1    |
| 2      | X    | X    | X    | X    | X    | X    | 0    | X    | 0    |
| 2      | X    | X    | X    | X    | X    | X    | 1    | X    | 1    |
| 3      | X    | X    | X    | X    | X    | 0    | X    | X    | 0    |
| 3      | X    | X    | X    | X    | X    | 1    | X    | X    | 1    |
| 4      | X    | X    | X    | X    | 0    | X    | X    | X    | 0    |
| 4      | X    | X    | X    | X    | 1    | X    | X    | X    | 1    |
| 5      | X    | X    | X    | 0    | X    | X    | X    | X    | 0    |
| 5      | X    | X    | X    | 1    | X    | X    | X    | X    | 1    |
| 6      | X    | X    | 0    | X    | X    | X    | X    | X    | 0    |
| 6      | X    | X    | 1    | X    | X    | X    | X    | X    | 1    |
| 7      | X    | 0    | X    | X    | X    | X    | X    | X    | 0    |
| 7      | X    | 1    | X    | X    | X    | X    | X    | X    | 1    |
| 8      | 0    | X    | X    | X    | X    | X    | X    | X    | 0    |
| 8      | 1    | X    | X    | X    | X    | X    | X    | X    | 1    |

## Usage

To use this chip in your project, include it as a dependency in your `diagram.json` file:

```json
  "dependencies": {
    "chip-mux-8-to-1-digital": "github:Dlloydev/Wokwi-Chip-Mux-8-to-1-Digital@1.0.1"
  }
```

Then, add the chip to your circuit by adding a `chip-mux-8-to-1-digital` item to the `parts` section of `diagram.json`:

```json
  "parts": {
    ...,
    { "type": "chip-mux-8-to-1-digital", "id": "chip-mux-8-to-1-digital1" }
  },
```

The actual source code for the chip lives in [src/main.c](https://github.com/Dlloydev/Wokwi-Chip-Mux-8-to-1-Digital/blob/main/src/main.c), and the pins are described in [chip.json](https://github.com/Dlloydev/Wokwi-Chip-Mux-8-to-1-Digital/blob/main/chip.json).

## Example

[![Wokwi_badge](https://user-images.githubusercontent.com/63488701/212449119-a8510897-c860-4545-8c1a-794169547ba1.svg)](https://wokwi.com/projects/356107121997264897) 8 to 1 Digital Multiplexer Example

## License

This project is licensed under the MIT license. See the [LICENSE](https://github.com/Dlloydev/Wokwi-Chip-Mux-8-to-1-Digital/blob/main/LICENSE) file for more details.
