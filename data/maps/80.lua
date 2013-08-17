local map = ...
-- Waterfall cave B1

local light_manager = require("maps/lib/light_manager")

function map:on_started(destination)

  light_manager.enable_light_features(map)
  map:set_light(0)
end

