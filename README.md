# 🎲 The Dice Game
/////

The Dice Game is a simple browser-based game built using **HTML, CSS, and JavaScript**.  
Two players roll a dice, and the player with the higher number wins the round. If both dice show the same number, the game results in a draw.

---

## 🚀 Features
- Random dice generation on button click  
- Two-player dice comparison  
- Dynamic dice image updates using JavaScript  
- Winner announcement based on dice values  
- Simple and clean UI  

---

## 🛠️ Tech Stack
- **HTML5**
- **CSS3**
- **JavaScript (DOM Manipulation)**

---

## 📂 Project Structure
```
TheDice/
│── image/          # Dice images
│── index.html      # Main game page
│── script.js       # Game logic
│── style.css       # Styling for the UI
│── README.md
```

---

## ▶️ How to Run

Clone the repository

```
git clone https://github.com/LogicHymn/The-Dice-Game.git
```

Open the project folder.

Run using **VS Code Live Server**

or simply open:

```
index.html
```

in your browser.

---

## 🧠 Game Logic

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

## 🎯 Purpose

This project was created as a practice exercise to understand:

- DOM manipulation  
- Random number generation  
- Updating HTML elements dynamically  
- Basic JavaScript game logic  

---

## ✨ Future Enhancements
- Add dice roll animation  
- Add score tracking system  
- Add sound effects  
- Add a reset / new game button  
- Improve UI with better styling  

---

## 📄 License
This project is created for **learning and practice purposes**.

---

## 👨‍💻 Author
Built with ❤️ while learning **JavaScript and Frontend Development**.