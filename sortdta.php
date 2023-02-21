<?php
$data=[2,3,4,5,6,7,8];
$banyakdata=count($data);
$temp;
$posisi;
//buble
for ($i=0; $i <$banyakdata ; $i++) { 
    for ($d=0; $d <$banyakdata-1 ; $d++) { 
        if ($data[$d]<$data[$d+1]) {
            global $temp;
            $temp=$data[$d];
            $data[$d]=$data[$d+1];
            $data[$d+1]=$temp;

        }
    }
}
for ($i=0; $i <$banyakdata ; $i++) { 
    echo $data[$i] ."|";
}

//selection sort
for ($i=0; $i <$banyakdata; $i++) { 
    global $temp,$posisi;
    $temp=$data[$i];
    $posisi=$i;
    for ($b=$i; $b <$banyakdata-1; $b++) { 
        if ($data[$b]>$data[$b+1]) {
        $temp=$data[$b];
        $posisi=$b;
    }
}
    $data[$posisi]=$data[$i];
    $data[$i]=$temp;
}

for ($i=0; $i <$banyakdata ; $i++) { 
     echo $data[$i] ."|";
    }


