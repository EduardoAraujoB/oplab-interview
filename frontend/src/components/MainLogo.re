[@bs.module] external src: string = "../../../../static/assets/app_icon.png";

module Styles = {
  open Css;

  let wrapper = style([paddingTop(px(50))]);

  let appIcon = style([width(px(50)), height(px(50))]);
};

[@react.component]
let make = () => {
  <div className=Styles.wrapper> <img src className=Styles.appIcon /> </div>;
};
