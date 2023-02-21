<?php
$data=[2,3,4,5,6,7,8];
$banyakdata=count($data);
$total;
for ($i=0; $i <$banyakdata ; $i++) { 
    global $total;
    $total+=$data[$i];
}
echo $total;