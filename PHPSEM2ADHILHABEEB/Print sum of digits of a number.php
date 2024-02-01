<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<?php
$number = 12345;
$sum = array_sum(str_split($number));

echo "Sum of digits in $number is: " . $sum;
?>

</body>
</html>