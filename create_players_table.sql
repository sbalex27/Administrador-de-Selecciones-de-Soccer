CREATE TABLE `super_champions`.`players` (
  `id` INT NOT NULL AUTO_INCREMENT ,
  `selection_id` INT NOT NULL,
  `name` VARCHAR(45) NOT NULL,
  `number_shirt` INT NOT NULL,
  `position` ENUM('Central', 'Medio', 'Ofensivo') NOT NULL,
  `age` INT NOT NULL,
  `skills` VARCHAR(45) NOT NULL,
  `leg` ENUM('Right', 'Left') NOT NULL,
  `is_nationalized` TINYINT(2) NOT NULL,
  `belonging_team` VARCHAR(45) NOT NULL,
  `sponsor` VARCHAR(45) NOT NULL,
  `market_value` FLOAT NOT NULL,
  PRIMARY KEY (`id`),
  INDEX `player_selection_id_idx` (`selection_id` ASC) VISIBLE,
  CONSTRAINT `player_selection_id`
    FOREIGN KEY (`selection_id`)
    REFERENCES `super_champions`.`selections` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);