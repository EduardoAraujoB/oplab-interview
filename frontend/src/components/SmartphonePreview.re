[@bs.module] external src: string = "../../../../static/assets/bg1.png";

module Styles = {
  open Css;

  let wrapper =
    style([
      position(absolute),
      left(px(0)),
      right(px(0)),
      top(px(0)),
      bottom(px(0)),
      width(pct(50.0)),
      height(pct(100.0)),
      overflow(hidden),
      zIndex(1),
      backgroundImage(url(src)),
      backgroundRepeat(noRepeat),
      backgroundPosition(center),
      backgroundSize(cover),
    ]);
};

[@react.component]
let make = () => {
  <section className=Styles.wrapper />;
};
