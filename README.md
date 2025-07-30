# UE5-CombatArena-Demo
A third‑person combat arena demo built in Unreal Engine 5 with C++, featuring player movement, AI opponents, and dodge/parry mechanics—designed as a polished mid‑level portfolio piece.

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Project Structure](#project-structure)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgements](#acknowledgements)
- [Contact](#contact)

## Installation
To get started:
    git clone https://github.com/yourname/UE5-CombatArena-Demo.git

1. Open `CombatArena.uproject` in Unreal Engine 5.3 or later.  
2. Build C++ modules using the Unreal Editor or your IDE.  
3. (Optional) Enable Git LFS for `.uasset` and `.umap` files to handle large assets.

## Usage
- Launch the **CombatArena** map from the Content Browser.  
- Controls:  
  - **W/A/S/D** – Move  
  - **Left Click** – Attack  
  - **Right Click** – Dodge/Parry  

## Features
- **Third‑Person Character Controller** based on UE5’s C++ template with custom movement logic.  
- **Combat System** with sword attacks, root motion hit reactions, and stagger effects.  
- **Dodge/Parry Mechanic** with directional input windows and precise timing.  
- **Enemy AI** powered by Behavior Trees and C++ tasks for patrol, chase, and attack behaviors.  
- **Modular Architecture** separating core systems (`CombatArena`) and game setup (`CombatArenaDemo`) modules.  

## Project Structure
```
UE5-CombatArena-Demo/
├── .github/                # CI pipelines and issue templates
├── Source/
│   ├── CombatArena/        # Core engine module
│   └── CombatArenaDemo/    # Game-specific module
├── Content/
│   └── Maps/CombatArena.umap
├── Docs/                   # Design docs and devlogs
├── README.md               # Project overview (this file)
├── LICENSE                 # MIT License
└── .gitignore
```

## Contributing
1. Fork the repo and create a feature branch (`feature/your-feature`).  
2. Commit changes with descriptive messages.  
3. Open a Pull Request against `main`.  
4. Follow Epic’s C++ coding standards and ensure all builds pass CI.  

## License
This project is licensed under the **MIT License**. See the [LICENSE](LICENSE) file for details.

## Acknowledgements
- Unreal Engine community and official documentation.  
- Quixel Megascans for arena assets.  
- Open-source plugin authors for inspiration.  

## Contact
Omar Hamza · [@Shortvilliann](https://x.com/Shortvilliann) · omar@neithowl.com
Portfolio: [Portfolio](https://omarhamza.me/)
