var x = 1;
var y = 2;
var step = 100;
var wolf_img;
function preload() {
    wolf_img = loadImage('sketch/lobol.png', function () { return console.log("Sucesso"); }, function () { return console.log("Falhou"); });
}
function keyPressed() {
    if (keyCode === LEFT_ARROW) {
        x--;
    }
    else if (keyCode === RIGHT_ARROW) {
        x++;
    }
    else if (keyCode === UP_ARROW) {
        y--;
    }
    else if (keyCode === DOWN_ARROW) {
        y++;
    }
}
function setup() {
    createCanvas(400, 400);
}
function draw() {
    image(wolf_img, 0, 0, 400, 400);
    background(0);
}
//# sourceMappingURL=build.js.map