<div align="center">

# Pokémon Gen III Enhanced

**An English-only enhancement of Pokémon Ruby and Sapphire (v1.2)**

Animated sprites, gym rematches, reusable TMs, forgettable HMs and more.

![me](https://github.com/CVSSTORE/Pokemon-Gen-III-Enhanced/blob/main/Showcase.gif)

[![Games](https://img.shields.io/badge/GAMES-RUBY%20%2B%20SAPPHIRE-b22222?style=flat-square)](https://github.com/CVSSTORE/Pokemon-Gen-III-Enhanced/releases)
[![Version](https://img.shields.io/badge/VERSION-ENGLISH%20v1.2-2e7d32?style=flat-square)](https://github.com/CVSSTORE/Pokemon-Gen-III-Enhanced/releases)
[![Stars](https://img.shields.io/github/stars/CVSSTORE/Pokemon-Gen-III-Enhanced?style=flat-square&label=STARS)](https://github.com/CVSSTORE/Pokemon-Gen-III-Enhanced/stargazers)
[![Downloads](https://img.shields.io/github/downloads/CVSSTORE/Pokemon-Gen-III-Enhanced/total?style=flat-square&label=DOWNLOADS)](https://github.com/CVSSTORE/Pokemon-Gen-III-Enhanced/releases)
[![Releases](https://img.shields.io/github/v/release/CVSSTORE/Pokemon-Gen-III-Enhanced?include_prereleases&style=flat-square&label=LATEST)](https://github.com/CVSSTORE/Pokemon-Gen-III-Enhanced/releases)

</div>

---

## What is Pokémon Gen 3 Enhanced?

Pokémon Gen 3 Enhanced adds quality-of-life improvements to **Pokémon Ruby** and **Pokémon Sapphire** while keeping the original world and story intact.

The project is a fork of [JimmyGlasscock's Pokémon Ruby/Sapphire Updated](https://github.com/JimmyGlasscock/PokemonRubySapphire-Updated), which is built on the [pret/pokeruby](https://github.com/pret/pokeruby) decompilation.

It supports the **English** versions of both games, revision 2 (v1.2), and is distributed as two IPS patches.

> [!IMPORTANT]
> No ROMs are included. You need your own legally obtained copy of each game. The patches only work on the exact clean ROMs listed under [Supported versions](#supported-versions).

## What this fork adds

- **Animated Pokémon sprites.** Two-frame front sprite animation in battle, the summary screen, the Pokédex, evolution scenes and the party menu.
- **Custom Sapphire sprites.** Pokémon Sapphire features its own custom sprite recolors.
- **Capture stars.** A star animation plays on a successful catch, as in Pokémon Emerald, FireRed and LeafGreen.
- **Gym leader rematches.** After the game is cleared, all eight gym leaders can be fought again with new teams. Each one gives you a held item the first time you win.
- **Reusable TMs.** TMs work like HMs and are not used up. The quantity is hidden in the bag.
- **Forgettable HMs.** HM moves can be forgotten and replaced like any other move, whether you learn the new move by level-up, TM, HM or evolution.
- **Trade Stone.** A new item that evolves every Pokémon that normally needs a trade, with no King's Rock, Metal Coat or Dragon Scale required. It costs ₽2100 and is sold in the Lilycove Department Store (3F and 5F).
- **Repel prompt.** When a Repel wears off, the game offers to use another one from your bag.
- **Berry glitch fix.** Always enabled.
- **FireRed and LeafGreen Poké Ball click sound.** Always enabled.
- **Blue field moves.** Field moves are shown in blue in the party menu, as in Emerald.
- **PC box scrolling.** L and R scroll the boxes in every button mode.
- **Updated fonts and title screen.** New font graphics, and edited title screen and copyright images.
- **Pokédex text tweak.** Improved text spacing.

### Gym rematch rewards

| Gym leader | Item |
|---|---|
| Roxanne | Hard Stone |
| Brawly | Black Belt |
| Wattson | Magnet |
| Flannery | Charcoal |
| Norman | Silk Scarf |
| Winona | Sharp Beak |
| Tate & Liza | Twisted Spoon |
| Wallace | Mystic Water |

### Trade Stone evolutions

Politoed, Alakazam, Machamp, Golem, Slowking, Gengar, Steelix, Kingdra, Scizor and Porygon2.

## What is not included

The upstream fork contains extra content that has been removed here on purpose:

- Terra Cave, Marine Cave and Underwater Route 125
- Birth Island, Island Harbor, Deoxys and the Eon and Aurora Tickets
- The extra Secret Base cave and the Dewford tileset animation
- The Version setting and the Classic/Modern Exp Share option in the Options menu
- Running and biking indoors
- Halved decoration prices
- The simplified Feebas encounter and the Water Stone Feebas evolution
- The German versions
  
## Sapphire player models

Pokémon Sapphire Version now has its own recolored player models for both Brendan and May. In Pokémon Ruby Version, the trainers keep their original red outfits, bandanas and accents. In Pokémon Sapphire Version, those same outfits are recolored to blue, so each game has its own look and matches its version theme. Only the colors are different. Every sprite keeps its original shape, pixels and animation, so Brendan and May look just as they did before, in new colors.

![me](https://github.com/CVSSTORE/Pokemon-Gen-III-Enhanced/blob/main/Updated Player Models.png)

## How to apply the patch

1. Download the patch for your game from the [Releases](https://github.com/CVSSTORE/Pokemon-Gen-III-Enhanced/releases) page.
2. Make a **copy** of your clean ROM so that your original stays untouched.
3. Check that the copy has the correct SHA-1 checksum (see Supported versions below).
4. Apply the patch to the copy with [Flips](https://www.smwcentral.net/?p=section&a=details&id=11474) or Lunar IPS.
5. Check that the result matches the patched checksum listed below.

You can check a checksum with `sha1sum yourrom.gba` on Linux or Mac, or `Get-FileHash -Algorithm SHA1 yourrom.gba` in Windows PowerShell.

## Supported versions

| Game | Version | Supported |
|---|---|---|
| Pokémon Ruby | English v1.2 (rev 2) | Yes |
| Pokémon Sapphire | English v1.2 (rev 2) | Yes |
| Ruby and Sapphire | English v1.0 and v1.1 | No |
| Ruby and Sapphire | German and other languages | No |

### Checksums (SHA-1)

**Pokémon Ruby, English v1.2**

- Clean ROM: `5b64eacf892920518db4ec664e62a086dd5f5bc8`
- Patched ROM: `fd23d49a239eefb7985d9dc0837d0c6431a0a028`

**Pokémon Sapphire, English v1.2**

- Clean ROM: `89b45fb172e6b55d51fc0e61989775187f6fe63c`
- Patched ROM: `94099d3f13b27f3f28bd43402c4f06cbf24249bd`

If your clean ROM has a different checksum, it is another revision and the patch will not work on it.

## Building from source

You only need this if you want to build the ROMs yourself. The patches in the Releases page are enough to play.

**Requirements:** Linux, macOS or Windows with WSL (Ubuntu), plus `build-essential`, `git`, `libpng-dev` and the ARM toolchain (`binutils-arm-none-eabi` and `gcc-arm-none-eabi`).

```
git clone https://github.com/CVSSTORE/Pokemon-Gen-III-Enhanced.git
git clone https://github.com/pret/agbcc
cd agbcc
./build.sh
./install.sh ../Pokemon-Gen-III-Enhanced
cd ../Pokemon-Gen-III-Enhanced
make ruby_rev2 -j$(nproc)
make sapphire_rev2 -j$(nproc)
```

The finished ROMs are `pokeruby_rev2.gba` and `pokesapphire_rev2.gba`. Their checksums will not match the original games, which is expected because the code has been changed. Do not run `make compare`.

See [INSTALL.md](INSTALL.md) for more detailed setup instructions.

## Versions

Each release is tagged with the game name and a version number. `Pokémon Ruby Enhanced` is the first Ruby release and `Pokémon Sapphire Enhanced` is the first Sapphire release. Later updates use `PRE-v1.1`, `SRE-v1.1` and so on.

<!--
## What does it look like?
Add screenshots here once you have them, for example:

![Animated sprites](screenshots/animated-sprites.png)
![Capture stars](screenshots/capture-stars.png)
-->

## Known issues

This is a pre-release and has not been fully playtested. If you find a bug, please open an issue and include the game (Ruby or Sapphire), the steps to reproduce it and, if possible, a screenshot.

## Credits

- [pret/pokeruby](https://github.com/pret/pokeruby) decompilation project
- [JimmyGlasscock](https://github.com/JimmyGlasscock/PokemonRubySapphire-Updated) for Pokémon Ruby/Sapphire Updated

## Disclaimer

This is a fan project. It is not affiliated with, endorsed by or sponsored by Nintendo, Game Freak, Creatures or The Pokémon Company. Pokémon and all related names are trademarks of their respective owners. This repository contains no ROMs and no copyrighted game files other than the decompilation source code from the upstream projects. Please see those projects for their licensing terms.
