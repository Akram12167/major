// Prompt the user for the time input
const hours = parseInt(prompt("Enter hours:"));
const minutes = parseInt(prompt("Enter minutes:"));
const seconds = parseInt(prompt("Enter seconds:"));

// Calculate the total time in seconds
const totalTime = (hours * 3600) + (minutes * 60) + seconds;

// Set up the timer
let remainingTime = totalTime;
const timerId = setInterval(() => {
  // Calculate the remaining hours, minutes, and seconds
  const remainingHours = Math.floor(remainingTime / 3600);
  const remainingMinutes = Math.floor((remainingTime % 3600) / 60);
  const remainingSeconds = remainingTime % 60;
  
  // Print the remaining time to the console
  console.log(`${remainingHours}:${remainingMinutes}:${remainingSeconds}`);
  
  // Decrement the remaining time by one second
  remainingTime--;

  // Check if the timer has expired
  if (remainingTime < 0) {
    // Stop the timer
    clearInterval(timerId);

    // Play a sound
    const audio = new Audio('path/to/sound/file.mp3');
    audio.play();

    // Display an alert to the user
    window.alert('Timer expired!');
  }
}, 1000);
