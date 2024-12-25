const planets = document.querySelectorAll('.planet');

planets.forEach(planet => {
    planet.addEventListener('click', () => {
        const currentAnimation = planet.style.animation;
        planet.style.animation = 'none'; // Stop the current animation
        void planet.offsetWidth; // Trigger reflow
        planet.style.animation = currentAnimation; // Restart the animation
        alert(`You clicked on ${planet.id.charAt(0).toUpperCase() + planet.id.slice(1)}`);
    });
});