# frozen_string_literal:true

module DS

  # A simple tree implementation.
  #
  # A room can have upto 4 exits (N,S,E,W).
  #
  class Room
    attr_accessor :north_east
    attr_accessor :north_west
    attr_accessor :south_east
    attr_accessor :south_west

    def initialize
      @north_west = nil
      @north_east = nil
      @south_east = nil
      @south_west = nil
    end

    def print_room(room, depth = 0)

        print("Depth: #{depth} \n")
        depth.times { print "\t" }
        print "NW: #{room.north_west} \n"

        # -------------------------------

        depth.times { print "\t" }
        print "NE: #{room.north_east} \n"

        # -------------------------------

        depth.times { print "\t" }
        print "SW: #{room.south_west} \n"

        # -------------------------------

        depth.times { print "\t" }
        print "SW: #{room.south_east} \n"

        print_room(room.north_west, depth + 1) unless room.north_west.nil?
        print_room(room.north_east, depth + 1) unless room.north_east.nil?
        print_room(room.south_west, depth + 1) unless room.south_west.nil?
        print_room(room.south_east, depth + 1) unless room.south_east.nil?

    end

  end
end
