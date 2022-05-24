ALTER TABLE `super_champions`.`selections` 
ADD INDEX `selection_area_id_idx` (`area_id` ASC) VISIBLE;
;
ALTER TABLE `super_champions`.`selections` 
ADD CONSTRAINT `selection_area_id`
  FOREIGN KEY (`area_id`)
  REFERENCES `super_champions`.`areas` (`id`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;
