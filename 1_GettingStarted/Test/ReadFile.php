<?php
// Path to the file
$file_path = '/root/root.txt';

// Check if the file exists
if (file_exists($file_path)) {
    // Read the file contents
    $file_content = file_get_contents($file_path);

    // Output the content
    echo "File Contents:\n";
    echo htmlspecialchars($file_content);
} else {
    echo "The file does not exist or is not accessible.";
}
?>
