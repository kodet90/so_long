# so_long

![](https://img.shields.io/badge/Language-C-blue)
![](https://img.shields.io/badge/School-42-black)

A game where you are in control of Mr Capybara that has to eat all the Cabbages and then escape the level.

This project was built for study and it uses Minilibx library by Olivier Crouzet

## Compile

To compile the game with all features use
```
make bonus
```

## Map requirements:

* `.ber` extension
* Be rectangular, surrounded by wall `1`
* At least 1 exit `E`
* At least 1 cabbage `C`
* Maximum 1 capybara `P`
* Optionally Mushroom `S`
* Optionally Empty `0`

## Example:
```
1111111
1SP0CE1
1111111
```
## Controls:

| Key             | Control             |
|:---------------:|:-------------------:|
| *WASD / Arrows* | Move                |
| *R*             | Restart level       |
| *TAB / Enter*   | Change level        |
| *1-4*           | Change window size  |
| *ESC*           | Quit the game       |



