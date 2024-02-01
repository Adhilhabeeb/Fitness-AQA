<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<?php
$radius = 5;
$area = M_PI * pow($radius, 2);
$circumference = 2 * M_PI * $radius;

echo "Area of the circle: " . $area . "<br>";
echo "Circumference of the circle: " . $circumference;
?>

</body>
</html>