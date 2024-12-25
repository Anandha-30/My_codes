import React, { useEffect } from 'react';

const SolarSystem = () => {
  useEffect(() => {
    const planets = document.querySelectorAll('.planet');
    const sun = document.querySelector('.sun');
    
    function rotatePlanets() {
      planets.forEach((planet, index) => {
        const speed = (index + 1) * 0.5;
        planet.style.animation = `orbit ${speed}s linear infinite`;
      });
    }
    
    rotatePlanets();
  }, []);
  
  return (
    <div className="solar-system">
      <div className="sun"></div>
      <div className="planet mercury"></div>
      <div className="planet venus"></div>
      <div className="planet earth"></div>
      <div className="planet mars"></div>
      <div className="planet jupiter"></div>
      <div className="planet saturn"></div>
      <div className="planet uranus"></div>
      <div className="planet neptune"></div>
    </div>
  );
};

export default SolarSystem;
