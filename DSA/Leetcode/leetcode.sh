#!/bin/bash

filename=$1
link=$2
tc=${3:-n} 
sc=${4:-1} 

# Add the file extension
filename="$filename.md"

# Create the markdown file
echo "## $filename" > "$filename"
echo "[Link]($link) to Question." >> "$filename"
echo "" >> "$filename"
echo "## Algorithm" >> "$filename"
echo "1." >> "$filename"
echo "" >> "$filename"
echo "<br>" >> "$filename"
echo "<b>Time Complexity : O($tc)</b>" >> "$filename"
echo "<br>" >> "$filename"
echo "<b>Space Complexity : O($sc)</b>" >> "$filename"

echo "$filename created successfully!"