.PHONY: clean All

All:
	@echo "----------Building project:[ CPPP_G_Bonus - Debug ]----------"
	@cd "CPPP_G_Bonus" && "$(MAKE)" -f  "CPPP_G_Bonus.mk"
clean:
	@echo "----------Cleaning project:[ CPPP_G_Bonus - Debug ]----------"
	@cd "CPPP_G_Bonus" && "$(MAKE)" -f  "CPPP_G_Bonus.mk" clean
