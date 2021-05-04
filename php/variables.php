<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title></title>
  </head>
  <body>

    <?php

    ## SIMPLE PRINT TAGS (echo) ##
    echo ("## SIMPLE PRINT TAGS ##");
    echo "<br>";
    echo "<br>";

      echo "<h1>This is a php website!!!</h1>";
      echo("Hello world!");  # this is the 'echo' command
                             # it prints things into the website!
      echo "<br>";  # you can use it alongside
                    # html like this
      echo "this is a php file";  # it doesn't need the parenthesis btw
      echo "<p>my php website!</p>";  # we can use any html tags inside of it
      echo "<hr>";

    ## VARIABLES IN PHP ##
    echo ("## VARIABLES IN PHP ##");
    echo "<br>";
    echo "<br>";

      # to create a variable you just type the dollar sign
      $characterName = "Tom";  # and the variable name
      $characterAge = 36;  # you don't need to specify the type of the variable

      # this is just a simple story to ilustrate how variables work in php
      echo "There was a man named $characterName <br>";     # so you can just
      echo "He was $characterAge years old <br>";           # put in the
      echo "He really liked the name $characterName <br>";  # variable name
      echo "But didn't like being $characterAge <br>";      # like this

      # and we can change the vable value halfway through the code
      $characterAge = 40;  # just like this
      echo "And so he changed his age to $characterAge";

      echo "<hr>";

    ## DATA TYPES IN PHP ##
    echo ("## DATA TYPES IN PHP ##");
    echo "<br>";
    echo "<br>";

      $phrase = "This is a phrase";  # This is a string type variable
      $age = 30;  # this is an interger type varible
      $grade = 10.5;  # this is a floating or double type variable
      $isMale = true;  # this is a boolean type variable

      echo $grade;  # we can print varibles as well like this

      echo "<hr>";

    ## WORKING WITH STRINGS IN PHP ##
    echo ("## WORKING WITH STRINGS IN PHP ##");
    echo "<br>";
    echo "<br>";

      $phrase = "je m'appelle";   # we can declare a variable
      echo $phrase;               # and then print it out
      echo "<br>";

      echo strtoupper($phrase);   # we can modify the string
      echo "<br>";                # to uppercase
      echo strtolower($phrase);   # we can modify the string
      echo "<br>";                # to lowercase

      echo strlen($phrase);       # we can use strlen(string length)
      echo "<br>";                # to know the length of the string

      echo $phrase[0];            # we can print n character of the
      echo "<br>";                # string by using the index

      echo "name"[2];             # we can use the index directly
      echo "<br>";                # in a string

      $phrase[0] = "c";           # we can change an specific
      echo $phrase;               # character in a string
      echo "<br>";

      # we can replace a word or a letter in a string in php like this
      echo str_replace("ce", "vous", $phrase);

      echo str_replace("vous", "vousonsonse", $phrase);





    echo "<hr>";


     ?>

  </body>
</html>
