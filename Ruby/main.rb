# frozen_string_literal: true

require 'prettyprint'

require_relative 'ds/list/list'
require_relative 'ds/list/list_node'
require_relative 'ds/tree/room'

r1 = DS::Room.new
r1.south_west = DS::Room.new
r1.south_west.south_east = DS::Room.new
r1.north_east = DS::Room.new


DS::Room.print_room(r1, 0)

