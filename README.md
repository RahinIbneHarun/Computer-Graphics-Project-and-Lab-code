Markdown# 🌊 2D Underwater Exploration & Computer Graphics Coursework

[![Language](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![Graphics API](https://img.shields.io/badge/API-OpenGL%20%2F%20GLUT-red.svg)](https://www.opengl.org/)
[![IDE](https://img.shields.io/badge/IDE-Code%3A%3ABlocks-green.svg)](https://www.codeblocks.org/)

An extensive collection of **Computer Graphics (C++ & OpenGL)** coursework, containing foundational laboratory tasks (Lab 1 to Lab 7) alongside a comprehensive term project: **"Under Water Old Mystery"** — an interactive, multi-scene 2D ocean simulation featuring organic trigonometric animations, real-time physics behaviors, and keyboard/mouse interactive callbacks.



## 📂 Repository File Structure

```text
├── All Lab code/
│   ├── Lab 1/
│   │   ├── Multishape.cpp         # Multiple 2D primitive rendering
│   │   ├── rec.cpp                # Coordinate rectangle drawing
│   │   └── tra.cpp                # Triangle primitive plotting
│   ├── Lab 2/
│   │   ├── 5flag.cpp              # National flag geometric modeling
│   │   ├── chese.cpp              # Chessboard coordinate pattern
│   │   ├── hill.cpp               # Layered hill horizon lines
│   │   └── rainbow.cpp            # Concentric arc color blending
│   ├── Lab 3/
│   │   ├── 4pic.cpp               # Multi-viewport quadrant rendering
│   │   ├── building.cpp           # Structural architecture modeling
│   │   ├── car.cpp                # 2D composite vehicle chassis
│   │   ├── lamp.cpp               # Street lamp design
│   │   └── tree.cpp               # Geometric flora and trunk structure
│   ├── Lab 4/
│   │   ├── hillscene.cpp          # Multi-layer scenic background
│   │   └── Ship.cpp               # Watercraft floating vessel model
│   ├── Lab 5/
│   │   ├── Moving car.cpp         # Incremental translation animation
│   │   ├── moving car 2.cpp       # Multi-vehicle directional motion
│   │   ├── movingbox.cpp          # Boundary collision and bouncing box
│   │   └── windmill.cpp           # Rotational matrix animation (blades)
│   ├── Lab 6/
│   │   ├── 4 obj.cpp              # Multi-entity coordinate positioning
│   │   ├── background.cpp         # Dynamic backdrop rendering
│   │   ├── keyobj.cpp             # Keyboard-driven coordinate manipulation
│   │   └── rain flood.cpp         # Particle-based rainfall and flood simulation
│   └── Lab 7/
│       ├── marge scene.cpp        # Composite object integration
│       └── village day night.cpp  # Smooth ambient daylight-to-night transitions
│
└── Under Water Computer Graphics Project/
    ├── Under Water Project.cpp    # Full integrated multi-scene project source
    └── under water own code.cpp   # Core modular scene algorithms & custom routines


🧪 Laboratory Breakdown (Lab 1 – Lab 7)Lab ModuleCore Graphics ConceptsKey Source FilesLab 1: Primitives & CoordinatesCanvas rasterization, Cartesian setup, GL_POINTS, GL_LINES, GL_TRIANGLES, GL_QUADSMultishape.cpp, rec.cpp, tra.cppLab 2: Procedural PatternsSymmetrical loops, concentric circular arcs, mathematical color banding5flag.cpp, chese.cpp, hill.cpp, rainbow.cppLab 3: Composite ModelingComplex 2D object construction, multi-viewport splitting, geometric transformations4pic.cpp, building.cpp, car.cpp, lamp.cpp, tree.cppLab 4: Scenic EnvironmentsDepth perception, horizon rendering, water-line floating alignmentShip.cpp, hillscene.cppLab 5: Affine AnimationsMatrix transformations (glRotatef, glTranslatef), periodic update loops (glutTimerFunc)Moving car.cpp, moving car 2.cpp, movingbox.cpp, windmill.cppLab 6: Interactivity & ParticlesEvent listener callbacks (glutKeyboardFunc, glutSpecialFunc), falling weather particles4 obj.cpp, background.cpp, keyobj.cpp, rain flood.cppLab 7: Lighting TransitionsRGB interpolation, dynamic sky state manipulation, multi-element day/night cyclesmarge scene.cpp, village day night.cpp🌊 Term Project: Under Water ExplorationA multi-environment underwater simulation combining marine biology, environmental protection, sunken history, and modern subsea technology.🐠 Scene 1: Vibrant Coral Reef EcosystemA flourishing marine biome packed with continuous organic movement and controllable aquatic elements.Objects: Sea turtle, school of blue fish, autonomous orange fish, crab, dual-propeller underwater drone with spotlight, treasure chest filled with gold coins, swaying seaweed, coral reefs, rocks, shells, starfish, rising bubbles, and sandy seabed.Animations: Orange fish patrol continuously at variable speeds; blue fish glide smoothly toward active waypoints; sea turtle glides horizontally while undulating vertically along a sine curve; drone propellers rotate continuously; bubbles rise from the seabed; seaweed sways with the water current.Controls:Key / MouseActionLeft Mouse ClickSpawn localized rising bubble clusters and set a new target destination for the fish schoolRight Mouse ClickToggle Drone Spotlight ON / OFFW / A / S / DMove the underwater drone (Up / Left / Down / Right)I / U / K / OMove the sea turtle (Up / Left / Down / Right)Y / G / H / JMove the seabed crab (Up / Left / Down / Right)LToggle drone spotlight beamTToggle treasure chest open/closed to reveal or conceal gold coinsRReset drone, crab, and turtle to default coordinates; turn off spotlight🚯 Scene 2: Ocean Pollution & ConservationAn environmental awareness stage focusing on marine cleanup and the threat of plastic debris to aquatic life.Objects: Turtle, fish, translucent jellyfish, seaweed, coral, rocks, shells, rising bubbles, drifting bottles, plastic bags, soda cans, and discarded tires.Animations: Fish and turtle patrol the water column; jellyfish float with natural drag; trash items drift passively with oceanic current vectors; bubbles rise continuously.Controls:Key / MouseActionLeft Mouse ClickSpawn fresh cluster of rising bubbles at the exact cursor positionRight Mouse ClickTarget and remove specific floating waste items+ or PIncrease the count of floating trash/waste objectsCClean and clear all pollutants from the sceneRReset scene to initial parameters⚓ Scene 3: Sunken Pirate MysteryAn expedition exploring historical sunken pirate shipwrecks and long-lost marine artifacts.Objects: Fully-equipped high-tech scuba diver, rectangular water drone with front spotlight, open wooden treasure chest with sparkling gems and coins, ship's steering wheel, iron anchor, pirate cutlass, Jolly Roger skull flag, pufferfish, angelfish, sea snake, starfish, and corals.Animations: Scuba diver swims along realistic trajectories; water drone hovers with a flashing warning beacon; dynamic light glimmers on gold and gems; organic diver exhalation bubbles.Controls:Key / MouseActionPassive Mouse MoveDynamically swivel the drone's spotlight and camera focus toward cursor coordinatesLeft Mouse ClickTrigger interactive animations on chests and marine shellsW / A / S / DDirect manual navigation of the Scuba Diver across the water columnCCollect nearby gold coinsRReset environment to initial state🌐 Scene 4: Deep-Sea Tech & Data InfrastructureAn exploration of the deep ocean floor highlighting modern technological installations and subsea telecommunications.Objects: Synchronized small fish schools, pulsating translucent jellyfish, sea turtle, deep oceanic trenches, submerged modular data center, surface research ship, subsea fiber cables, glowing bioluminescent flora, and rock formations.Animations: Fish school swims in synchronized linear formation; jellyfish pulse with periodic vertical compression; sea turtle swims with gentle flipper strokes; data center racks display soft pulsing server LEDs; surface research ship rocks gently on wave swells.Controls:Key / MouseActionMouse Click & DragScale jellyfish size (Matrix Scaling) or dynamically reposition across viewportSpacebarScatter the school of fish into an emergency evasion formationDToggle subsea data center lightingSToggle research vessel spotlightRReset scene state🛠️ Technical Specifications & ConceptsProgramming Language: C++Graphics API: OpenGL (Utility Toolkit: FreeGLUT / GLUT)Mathematical & Graphics Implementations:Matrix Transformations: Translation (glTranslatef), Rotation (glRotatef), Scaling (glScalef) for custom entity articulation.Trigonometric Kinematics: Sine and cosine mathematical waveforms driving organic biological oscillation (turtle swimming, jellyfish contraction, seaweed displacement).Particle Mechanics: Dynamic spawning, alpha blending, and vertical velocity tracking for rising oxygen bubbles and rainfall.Input Pipelines: Integrated OpenGL callback architecture (glutKeyboardFunc, glutMouseFunc, glutMotionFunc, glutPassiveMotionFunc, glutTimerFunc).