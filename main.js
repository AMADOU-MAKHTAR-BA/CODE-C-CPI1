const button = document.querySelector("#bouton");

button.onclick = () => {
    button.classList.toggle("myToggleClass")
    if (button.classList.contains("myToggleClass")) {
     button.textContent = "click encore";   
    } else {
         button.textContent = "click moi";  
    }
    
}

let monTableau = [2, 4, "gerte", ["34567", 345, "papa"]]
const longueurTableau = monTableau.length;
// console.log("La longueur de votre tableau est : ",longueurTableau);

// console.table(monTableau);
console.log(1 + "1");
console.log(1 - "1");
console.log(17 - "1");
console.log(17 + "1");