
function result(){
let inputValue=document.getElementById('inputData').Value;

console.log(inputValue);

let displayHeading=document.getElementById('text');

displayHeading.innerHTML=inputValue;

displayHeading.style.color="red"

document.getElementsByTagName('body')[0].style.backgroundColor="blue";
}