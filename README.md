# 🎲 The Dice Game
/////

The Dice Game is a simple browser-based game built using **HTML, CSS, and JavaScript**.  
Two players roll a dice, and the player with the higher number wins the round. If both dice show the same number, the game results in a draw.

This project was created to practice **DOM manipulation and random number generation in JavaScript**.

---

# 🚀 Features
- Random dice generation
- Two-player dice comparison
- Dynamic dice image updates using JavaScript
- Winner announcement based on dice values
- Simple and clean UI

---

# 🛠️ Tech Stack
- HTML5
- CSS3
- JavaScript (DOM Manipulation)

---

# 📂 Project Structure
```
dice-game/
│
├── assets/
│   └── images/
│       ├── dice1.png
│       ├── dice2.png
│       ├── dice3.png
│       ├── dice4.png
│       ├── dice5.png
│       └── dice6.png
│
├── src/
│   ├── css/
│   │   └── style.css
│   │
│   └── js/
│       └── script.js
│
├── index.html
├── README.md
└── .gitignore
```

---

# ▶️ How to Run

Clone the repository

```
git clone https://github.com/LogicHymn/dice-game.git
```

Open the project folder.

Run using **VS Code Live Server**  
or simply open:

```
index.html
```

in your browser.

---

# 🧠 Game Logic

Two random numbers are generated between **1 and 6** using JavaScript.

```
Math.floor(Math.random() * 6) + 1
```

Each number corresponds to a dice image.

The dice images update dynamically in the browser.

The program compares both numbers:

- Higher number → **Player wins**
- Same number → **Draw**

---

# 🎯 Purpose

This project was created as a practice exercise to understand:

- DOM manipulation
- Random number generation
- Updating HTML elements dynamically
- Basic JavaScript game logic

---

# ✨ Future Enhancements
- Add dice roll animation
- Add score tracking system
- Add sound effects
- Add a reset or new game button
- Improve UI design

---

# 📄 License
This project is created for **learning and practice purposes**.

---

# 👨‍💻 Author
Built with ❤️ while learning **JavaScript and Frontend Development**.