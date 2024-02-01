<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>

<?php
function rect_area($length, $width) {
    $area = $length * $width;
    echo "Area Of Rectangle with length " . $length . " & width " . $width . " is " . $area;
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $userInput = $_POST["shape"];

    switch ($userInput) {
        case "rectangle":
            $length = $_POST["length"];
            $width = $_POST["width"];
            rect_area($length, $width);
            break;
        case "triangle":
            $base_triangle = $_POST["length"];
            $height_triangle = $_POST["width"];
            echo "Area of the triangle with base $base_triangle and height $height_triangle = " . ($base_triangle * $height_triangle) / 2;  
            break;
        case "square":
            $side_square = $_POST["length"];
            echo "Area of the square with side $side_square = " . $side_square * $side_square;  
            break;
        case "parallelogram":
            $base_parallelogram = $_POST["length"];
            $height_parallelogram = $_POST["width"];
            echo "Area of the parallelogram with base $base_parallelogram and height $height_parallelogram = " . $base_parallelogram * $height_parallelogram;  
            break;
        default:
            echo "Invalid shape input!";
    }
}
?>

<form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>">
    <label for="shape">Select a shape:</label>
    <select name="shape">
        <option value="rectangle">Rectangle</option>
        <option value="triangle">Triangle</option>
        <option value="square">Square</option>
        <option value="parallelogram">Parallelogram</option>
    </select>

    <br><br>

    <label for="length">Enter length:</label>
    <input type="text" name="length">

    <br><br>

    <label for="width">Enter width:</label>
    <input type="text" name="width">

    <br><br>

    <input type="submit" value="Submit">
</form>

</body>
</html>
