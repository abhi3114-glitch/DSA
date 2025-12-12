param($fileName)

# Get file details
$fileNameWithoutExt = [System.IO.Path]::GetFileNameWithoutExtension($fileName)
$buildDir = "build"
$exePath = "$buildDir\$fileNameWithoutExt.exe"

# Create build directory if it doesn't exist
if (-not (Test-Path $buildDir)) {
    New-Item -ItemType Directory -Path $buildDir | Out-Null
}

# Compile
$gpp = "C:\mingw64\bin\g++.exe"
& $gpp -std=c++17 $fileName -o $exePath

# Run if compilation succeeded
if ($?) {
    # Temporarily add MinGW to PATH for this execution only
    $env:PATH = "C:\mingw64\bin;$env:PATH"
    & ".\$exePath"
}
