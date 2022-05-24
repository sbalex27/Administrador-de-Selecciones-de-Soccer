CREATE TABLE `super_champions`.`matches` (
  `id` INT NOT NULL AUTO_INCREMENT,
  `local_id` INT NOT NULL,
  `visitor_id` INT NOT NULL,
  `type` ENUM('Official', 'Friendly') NOT NULL,
  `local_goals` INT NOT NULL,
  `visitor_goals` VARCHAR(45) NOT NULL,
  `date` DATETIME NOT NULL,
  PRIMARY KEY (`id`),
  INDEX `selection_local_id_idx` (`local_id` ASC) VISIBLE,
  INDEX `selection_visitor_id_idx` (`visitor_id` ASC) VISIBLE,
  CONSTRAINT `selection_local_id`
    FOREIGN KEY (`local_id`)
    REFERENCES `super_champions`.`selections` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `selection_visitor_id`
    FOREIGN KEY (`visitor_id`)
    REFERENCES `super_champions`.`selections` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);