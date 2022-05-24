CREATE TABLE `super_champions`.`selections` (
  `id` INT NOT NULL AUTO_INCREMENT,
  `area_id` INT NOT NULL,
  `ranking` INT NOT NULL,
  `country` VARCHAR(45) NOT NULL,
  `stadium` VARCHAR(45) NOT NULL,
  `technical` VARCHAR(45) NOT NULL,
  `goalkeeping_coach` VARCHAR(45) NOT NULL,
  `physiotherapist` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`id`));
