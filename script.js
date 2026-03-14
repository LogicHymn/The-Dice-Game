//Change the Dice
function getRandomDice(){
    return Math.floor(Math.random() * 6) + 1;
}

//Roll Dice for Both Player
function playGame(){
    let player1 = getRandomDice();
    let player2 = getRandomDice();

    //Update the image
    document.querySelector(".js-dice1").src = `image/dice${player1}.png`;
    document.querySelector(".js-dice2").src = `image/dice${player2}.png`;

    let resultText = document.querySelector(".result");

    //Compare the Result
    if(player1 > player2){
        resultText.innerHTML = "Player 1 Wins 🚩";
    }
    else if(player1 < player2){
        resultText.innerHTML = "Player 2 Wins 🚩";
    }
    else{
        resultText.innerHTML = "Draw 🤝";
    }
}

//Event Listener
document.querySelector(".button").addEventListener("click", playGame);

