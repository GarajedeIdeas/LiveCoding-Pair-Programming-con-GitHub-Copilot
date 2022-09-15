// function to draw a red title
function drawTitle() {
    // set the font
    ctx.font = 'bold 30px sans-serif';
    // set the fill style
    ctx.fillStyle = 'red';
    // draw the text
    ctx.fillText('Hello World', 10, 50);
}

// primitives
// function to draw a rectangle
function drawRectangle() {
    // set the fill style
    ctx.fillStyle = 'blue';
    // draw the rectangle
    ctx.fillRect(10, 60, 100, 50);
}

// function to draw a circle
function drawCircle() {
    // set the fill style
    ctx.fillStyle = 'green';
    // draw the circle
    ctx.beginPath();
    ctx.arc(60, 160, 50, 0, 2 * Math.PI);
    ctx.fill();
}

// function to draw a line
function drawLine() {
    // set the stroke style
    ctx.strokeStyle = 'red';
    // draw the line
    ctx.beginPath();
    ctx.moveTo(10, 250);
    ctx.lineTo(110, 250);
    ctx.stroke();
}

// function to draw a triangle
function drawTriangle() {
    // set the fill style
    ctx.fillStyle = 'orange';
    // draw the triangle
    ctx.beginPath();
    ctx.moveTo(10, 300);
    ctx.lineTo(110, 300);
    ctx.lineTo(60, 350);
    ctx.fill();
}

// function to draw a star
function drawStar() {
    // set the fill style
    ctx.fillStyle = 'yellow';
    // draw the star
    ctx.beginPath();
    ctx.moveTo(60, 400);
    ctx.lineTo(90, 450);
    ctx.lineTo(10, 470);
    ctx.lineTo(100, 470);
    ctx.lineTo(20, 450);
    ctx.fill();
}
